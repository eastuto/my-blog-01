[@react.component]
let make = (~status: 'a) => {
  switch (status) {
  | Formality.FormStatus.Submitted =>
    <div className="notification is-success">
      <button className="delete" />
      "Blog post saved"->React.string
    </div>
  | Formality.FormStatus.SubmissionFailed(res) =>
    <div className="notification is-danger">
      <button className="delete" />
      "Server error submitting blog post"->React.string
    </div>
  | _ => React.null
  };
};
