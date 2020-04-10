[@react.component]
let make = () => {
  let (user, _) = UserContext.useUser();
  <Section title="Create Post" subtitle="">
    {switch (user) {
     | Guest => <Section title="403 Unauthorized" />
     | Authenticated(userDetails) =>
       let authorResult = AuthorQuery.getAuthorByUserId(userDetails.id);
       switch (authorResult) {
       | [|author|] => <PostForm authorId={author.id} />
       | _ => <Section title="Sorry you're not an Author" />
       };
     }}
  </Section>;
};

let default = make;
