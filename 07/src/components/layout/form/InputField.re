open FormStyles;

[@react.component]
let make =
    (
      ~inputId: string,
      ~value: string,
      ~disabled: 'a,
      ~onChange: ReactEvent.Form.t => unit,
      ~onBlur: 'bool,
      ~result,
      ~label: string,
      ~placeholder: string="",
      ~type_: string="text",
    ) =>
  <div className="field is-horizontal">
    <div className="field-label is-normal">
      <label className="label"> label->React.string </label>
    </div>
    <div className="field-body">
      <div className="field">
        <input
          id=inputId
          placeholder
          className={inputFieldStyles(result)}
          type_
          value
          disabled
          onBlur
          onChange
        />
        {switch (result) {
         | Some(Belt.Result.Error(message)) =>
           <div className="help is-danger"> message->React.string </div>
         | Some(Ok(_)) => React.null
         | None => React.null
         }}
      </div>
    </div>
  </div>;

let default = make;
