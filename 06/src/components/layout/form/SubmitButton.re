[@react.component]
let make = (~status: 'bool, ~reset: 'unit) => {
  <div className="field is-grouped is-pulled-right">
    <div className="control">
      {switch (status) {
       | Formality.FormStatus.Submitted =>
         <button className="button is-link is-success" disabled=true>
           <FontAwesomeIcon icon="check" />
           <span> " Saved"->React.string </span>
         </button>
       | Formality.FormStatus.Submitting(_) =>
         <button className="button is-link is-loading">
           <span> "Submitting"->React.string </span>
         </button>
       | _ =>
         <button className="button is-link">
           <span> "Submit"->React.string </span>
         </button>
       }}
    </div>
    <div className="control">
      <button className="button is-link is-light" onClick={_ => reset()}>
        "Cancel"->React.string
      </button>
    </div>
  </div>;
};

let default = make;
