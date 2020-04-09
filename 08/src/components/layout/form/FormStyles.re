open Css;

let getFieldStateStyle = fieldState =>
  switch (fieldState) {
  | Some(Belt.Result.Error(_)) => "is-danger"
  | Some(Ok(Formality.Valid)) => "is-success"
  | Some(Ok(Formality.NoValue)) => ""
  | None => ""
  };

let inputFieldStyles = fieldState => {
  merge(["input", getFieldStateStyle(fieldState)]);
};

let textareaFieldStyles = fieldState => {
  merge(["textarea", getFieldStateStyle(fieldState)]);
};
