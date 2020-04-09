open UserTypes;

[%bs.raw {|require('bulma')|}];

Css.(global("p", [marginBottom(px(20))]));

type state = {user};

let reducer = (_, action) =>
  switch (action) {
  | UserLoggedIn(userDetails) => {user: Authenticated(userDetails)}
  | UserLoggedOut => {user: Guest}
  };

[@react.component]
let make = (~children) => {
  let (state, dispatch) = React.useReducer(reducer, {user: Guest});
  <UserProvider value=(state.user, dispatch)>
    <Next.Head>
      <meta
        name="viewport"
        content="width=device-width, initial-scale=1, shrink-to-fit=no, viewport-fit=cover"
      />
      <title> {React.string("Man Vs Code")} </title>
    </Next.Head>
    <Navbar />
    children
    <Footer />
  </UserProvider>;
};
