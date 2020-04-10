[@react.component]
let make = (~status: 'a, ~successMessage: string, ~errorMessage: string) => {
  switch (status) {
  | Formality.FormStatus.Submitted =>
    <div className="notification is-success">
      successMessage->React.string
    </div>
  | Formality.FormStatus.SubmissionFailed(_) =>
    <div className="notification is-danger"> errorMessage->React.string </div>
  | _ => React.null
  };
};
