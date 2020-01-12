module PostFormHook = Formality.Make(PostFormConfig);

[@react.component]
let make = (~authorId: string) => {
  let initialState =
    PostFormConfig.{title: "", body: "", tags: "", postAuthorId: authorId};
  let form =
    PostFormHook.useForm(
      ~initialState,
      ~onSubmit=(state, form) => {
        Js.log2("Submitted with:", state);
        Js.Global.setTimeout(
          () => {
            form.notifyOnSuccess(None);
            form.reset->Js.Global.setTimeout(3000)->ignore;
          },
          500,
        )
        ->ignore;
      },
    );
  <div className="container">
    <form
      className="form" onSubmit={form.submit->Formality.Dom.preventDefault}>
      <div className="container" />
      <Notification status={form.status} />
      <InputField
        inputId="post--title"
        label="Title"
        value={form.state.title}
        disabled={form.submitting}
        onBlur={_ => form.blur(Title)}
        result={Title->(form.result)}
        onChange={event =>
          form.change(
            Title,
            PostFormConfig.TitleField.update(
              form.state,
              event->ReactEvent.Form.target##value,
            ),
          )
        }
      />
      <TextAreaField
        inputId="post--body"
        placeholder="Write your blog here"
        label="Body"
        value={form.state.body}
        disabled={form.submitting}
        onBlur={_ => form.blur(Body)}
        result={Body->(form.result)}
        onChange={event =>
          form.change(
            Body,
            PostFormConfig.BodyField.update(
              form.state,
              event->ReactEvent.Form.target##value,
            ),
          )
        }
      />
      <InputField
        inputId="post--tags"
        label="Tags"
        placeholder="Add comma separated tags"
        value={form.state.tags}
        disabled={form.submitting}
        onBlur={_ => form.blur(Tags)}
        result={Tags->(form.result)}
        onChange={event =>
          form.change(
            Tags,
            PostFormConfig.TagsField.update(
              form.state,
              event->ReactEvent.Form.target##value,
            ),
          )
        }
      />
      <SubmitButton status={form.status} reset={form.reset} />
    </form>
  </div>;
};
