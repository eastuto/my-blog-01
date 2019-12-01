open UserTypes;

[@react.component]
let make = (~children: React.element) => {
  let (user, dispatchUserAction) = UserContext.useUser();
  <>
    {switch (user) {
     | Guest => <Section title="403 Unauthorized" />
     | Authenticated => children
     }}
  </>;
};

let default = make;
