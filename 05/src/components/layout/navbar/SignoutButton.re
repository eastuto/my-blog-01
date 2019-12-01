[@bs.module "aws-amplify"] external auth: Js.t('a) = "Auth";
let signOut = auth##signOut;

[@react.component]
let make = (~closeModal: 'a) => {
  <div className="buttons">
    <a
      className="button is-warning"
      onClick={_ => {
        auth##signOut();
        closeModal();
      }}>
      <strong> {React.string("Sign out")} </strong>
    </a>
  </div>;
};

let default = make;
