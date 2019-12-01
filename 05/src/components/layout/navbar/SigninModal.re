[@react.component]
let make = (~isActive: bool=?, ~closeModal: 'a=?, ~isSignUpModal: bool=false) => {
  let (user, dispatchUserAction) = UserContext.useUser();
  <Modal isActive closeModal>
    {isSignUpModal
       ? <Amplify.Authenticator
           onStateChange={(authState, authData) =>
             UserContext.handleStateChange(authState, dispatchUserAction)
           }
         />
       : <Amplify.Authenticator
           hideDefault=true
           onStateChange={(authState, authData) =>
             UserContext.handleStateChange(authState, dispatchUserAction)
           }>
           <Amplify.SignIn />
         </Amplify.Authenticator>}
  </Modal>;
};
