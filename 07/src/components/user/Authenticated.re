open UserTypes;

[@react.component]
let make = (~children: React.element) => {
  let (user, _) = UserContext.useUser();
  <>
    {switch (user) {
     | Guest => <Section title="403 Unauthorized" />
     | Authenticated(_) => children
     }}
  </>;
};

let default = make;
