open Css;

let modalStyles = modalState =>
  merge([
    {
      modalState ? "is-active" : "";
    },
    "modal",
  ]);

[@react.component]
let make = (~isActive: bool, ~closeModal: 'a=?, ~children: React.element) => {
  <div className={modalStyles(isActive)}>
    <div className="modal-background" />
    <div className="modal-content"> children </div>
    <button
      onClick={_event => closeModal()}
      className="modal-close is-large"
    />
  </div>;
};

let default = make;
