open AuthorQuery;

[@react.component]
let make = () => {
  let (user, _) = UserContext.useUser();
  switch (user) {
  | Guest => <Section title="403 Unauthorized" />
  | Authenticated(user) =>
    let authorResult = getAuthorByUserId(user.id);
    switch (authorResult) {
    | [||] => <Section title="Sorry you're not an Author" />
    | [|author|] =>
      <Section
        title={"Congratulations " ++ author.firstName}
        subtitle="You're an author"
      />
    | _ => <Section title="Sorry you're not an Author" />
    };
  };
};

let default = make;
