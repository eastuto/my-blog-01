module Authenticator = {
  [@bs.module "aws-amplify-react"] [@react.component]
  external make:
    (~hideDefault: bool=?, ~onStateChange: 'a=?, ~children: React.element=?) =>
    React.element =
    "Authenticator";
};

module SignIn = {
  [@bs.module "aws-amplify-react"] [@react.component]
  external make: _ => React.element = "SignIn";
};
