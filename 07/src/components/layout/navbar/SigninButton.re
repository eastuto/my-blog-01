open Css;

let linkStyle = selector("a", [color(rgb(130, 130, 130))]);
let linkHover = selector("a:hover", [borderBottom(px(1), solid, white)]);

let navbarItem =
  merge([
    style([
      background(rgb(0, 107, 198)),
      color(rgb(130, 130, 130)),
      linkStyle,
      linkHover,
    ]),
    "navbar-item",
  ]);

type state = {
  signInModalIsActive: bool,
  signUpModalIsActive: bool,
};

type action =
  | ToggleSignInModal
  | ToggleSignUpModal
  | CloseModal;

let reducer = (state, action) =>
  switch (action) {
  | ToggleSignInModal => {
      signInModalIsActive: !state.signInModalIsActive,
      signUpModalIsActive: false,
    }
  | ToggleSignUpModal => {
      signUpModalIsActive: !state.signUpModalIsActive,
      signInModalIsActive: false,
    }
  | CloseModal => {signInModalIsActive: false, signUpModalIsActive: false}
  };

[@react.component]
let make = () => {
  let (user, _) = UserContext.useUser();
  let (state, dispatchModalAction) =
    React.useReducer(
      reducer,
      {signInModalIsActive: false, signUpModalIsActive: false},
    );
  <div className=navbarItem>
    {switch (user) {
     | Guest =>
       <div className="buttons">
         <a
           className="button is-warning"
           onClick={_event => dispatchModalAction(ToggleSignUpModal)}>
           <strong> {React.string("Sign up")} </strong>
         </a>
         <a
           className="button is-light"
           onClick={_event => dispatchModalAction(ToggleSignInModal)}>
           {React.string("Log in")}
         </a>
         <SigninModal
           isActive={state.signInModalIsActive}
           closeModal={_ => dispatchModalAction(CloseModal)}
         />
         <SigninModal
           isActive={state.signUpModalIsActive}
           closeModal={_ => dispatchModalAction(CloseModal)}
           isSignUpModal=true
         />
       </div>
     | Authenticated(_) =>
       <SignoutButton closeModal={_ => dispatchModalAction(CloseModal)} />
     }}
  </div>;
};

let default = make;
