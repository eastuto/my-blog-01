open ApolloHooks;
module PostFormHook = Formality.Make(PostFormConfig);

module PostMutation = [%graphql
  {|
  mutation PostMutation($title: String!, $body: String!, $tags: [String!]!, $postAuthorId: ID!) {
    createPost(input: {title: $title, body: $body, tags: $tags, postAuthorId: $postAuthorId}) {
        id
        title
        body
        tags
      }
  }
|}
];

[@react.component]
let make = (~authorId: string) => {
  let initialState =
    PostFormConfig.{title: "", body: "", tags: "", postAuthorId: authorId};
  let (postMutation, _simple, _full) = useMutation(PostMutation.definition);
  let stub = {"id": "", "title": "", "body": "", "tags": [|""|]};
  let form =
    PostFormHook.useForm(
      ~initialState,
      ~onSubmit=(state, form) => {
        postMutation(
          ~variables=
            PostMutation.makeVariables(
              ~title=state.title,
              ~body=state.body,
              ~tags=Js_string.split(",", state.tags), // convert comma separate string into array of strings
              ~postAuthorId=authorId,
              (),
            ),
          (),
        )
        |> Js.Promise.then_(result => {
             switch (result) {
             | ApolloHooksMutation.Data(response) =>
               Belt.Option.(
                 response##createPost
                 ->mapWithDefault(stub, item =>
                     {
                       "id": item##id,
                       "title": item##title,
                       "body": item##body,
                       "tags": item##tags,
                     }
                   )
               )
               ->ignore;
               form.notifyOnSuccess(None);
             | Loading => ignore()
             | NotCalled => ignore()
             | Error(_) => form.notifyOnFailure(UnexpectedServerError)
             | NoData => form.notifyOnFailure(UnexpectedServerError)
             };
             Js.Promise.resolve();
           })
        |> ignore;
        Js.log2("Submitted with:", state);
      },
    );
  <div className="container">
    <form
      className="form" onSubmit={form.submit->Formality.Dom.preventDefault}>
      <div className="container" />
      <Notification
        status={form.status}
        successMessage="Blog post has been saved"
        errorMessage="Server error submitting blog post"
      />
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
