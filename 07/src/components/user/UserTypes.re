type userDetails = {
  email: string,
  id: string,
};

type user =
  | Guest
  | Authenticated(userDetails);

type userAction =
  | UserLoggedIn(userDetails)
  | UserLoggedOut;
