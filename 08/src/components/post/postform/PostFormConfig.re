open Formality;

type field =
  | Title
  | Body
  | Tags;

type state = {
  title: string,
  body: string,
  tags: string,
  postAuthorId: string,
};

type message = string;
type submissionError = unit;

module TitleField = {
  let update = (state, value) => {...state, title: value};

  let validator = {
    field: Title,
    strategy: Strategy.OnFirstSuccessOrFirstBlur,
    dependents: None,
    validate: ({title}) =>
      switch (title) {
      | "" => Error("Title is required")
      | _ => Ok(Valid)
      },
  };
};

module BodyField = {
  let update = (state, value) => {...state, body: value};
  let validator = {
    field: Body,
    strategy: Strategy.OnFirstSuccessOrFirstBlur,
    dependents: None,
    validate: ({body}) =>
      switch (body) {
      | "" => Error("Body is required")
      | _ => Ok(Valid)
      },
  };
};

module TagsField = {
  let update = (state, value) => {...state, tags: value};
  let validator = {
    field: Tags,
    strategy: Strategy.OnFirstSuccessOrFirstBlur,
    dependents: None,
    validate: ({tags}) =>
      switch (tags) {
      | "" => Error("Tags are required")
      | _ => Ok(Valid)
      },
  };
};

let validators = [
  TitleField.validator,
  BodyField.validator,
  TagsField.validator,
];
