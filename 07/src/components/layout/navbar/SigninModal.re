let handleStateChange =
    (
      authstate: string,
      authData: 'a,
      dispatchUserAction: UserContext.dispatch,
    ) => {
  switch (authstate) {
  | "signIn" => dispatchUserAction(UserTypes.UserLoggedOut)
  | "signedIn" =>
    let userDetails: UserTypes.userDetails = {
      id: authData##attributes##sub,
      email: authData##attributes##email,
    };
    dispatchUserAction(UserTypes.UserLoggedIn(userDetails));
  | _ => () /*  }*/ /*}*/
  };
};

[@react.component]
let make = (~isActive: bool=?, ~closeModal: 'a=?, ~isSignUpModal: bool=false) => {
  let (user, dispatchUserAction) = UserContext.useUser();
  <Modal isActive closeModal>
    {isSignUpModal
       ? <Amplify.Authenticator
           onStateChange={(authState, authData) =>
             handleStateChange(authState, authData, dispatchUserAction)
           }
         />
       : <Amplify.Authenticator
           hideDefault=true
           onStateChange={(authState, authData) =>
             handleStateChange(authState, authData, dispatchUserAction)
           }>
           <Amplify.SignIn />
         </Amplify.Authenticator>}
  </Modal>;
};
