open UserTypes;

// Define the type of the value we will put in context - pair of user and dispatch
type dispatch = userAction => unit;
type contextValue = (user, dispatch);

let initValue: contextValue = (Guest, _ => ignore());

// Create the context that will hold the value
let context = React.createContext(initValue);

// Create hooks for ease of access to the context value
let useUser = () => React.useContext(context);

let handleStateChange = (authstate: string, dispatchUserAction: dispatch) => {
  switch (authstate) {
  | "signIn" => dispatchUserAction(UserTypes.UserLoggedOut)
  | "signedIn" => dispatchUserAction(UserTypes.UserLoggedIn)
  | _ => ()
  };
};
