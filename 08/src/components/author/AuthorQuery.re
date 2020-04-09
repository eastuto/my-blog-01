open ApolloHooks;
open AuthorType;

module AuthorQuery = [%graphql
  {|
    query getAuthorByUserId($userId: ID) {
      listAuthors(filter: {userID: {eq: $userId} }) {
          items {
            id
            firstName
            lastName
            email
            userID
          }
        }
    }
  |}
];

let jsonToString = (obj: Js.Json.t): string => {
  obj |> Js.Json.decodeString |> Belt.Option.getWithDefault(_, "");
};

let getAuthorByUserId = (userId: string) => {
  let (simple, _full) =
    useQuery(
      ~variables=AuthorQuery.makeVariables(~userId, ()),
      AuthorQuery.definition,
    );
  let authorResult =
    switch (simple) {
    | Loading => [||]
    | Error(_) => [||]
    | NoData => [||]
    | Data(response) =>
      Belt.Option.(
        response##listAuthors
        ->flatMap(listAuthors => listAuthors##items)
        ->mapWithDefault([||], items =>
            items->Belt.Array.map(item =>
              item->mapWithDefault(authorStub, item =>
                {
                  id: item##id,
                  firstName: item##firstName,
                  lastName: item##lastName,
                  email: jsonToString(item##email),
                  userId: item##userID,
                }
              )
            )
          )
      )
    };
  authorResult;
};
