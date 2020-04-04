let str = React.string;

open Css;

let dateStyles = style([fontSize(px(10))]);

[@react.component]
let make =
    (
      ~title: string=?,
      ~body: string=?,
      ~tags: array(string)=?,
      ~firstName: string="",
      ~lastName: string="",
      ~createdAt: string=?,
    ) => {
  let localCreatedAt =
    Js.Date.fromString(createdAt) |> Js.Date.toLocaleString;
  let summary =
    String.length(body) < 100 ? body : String.sub(body, 0, 100) ++ "...";
  let authorName = firstName ++ " " ++ lastName;
  <div className="column is-one-third">
    <div className="card">
      <div className="card-content">
        <p className="title is-4"> {title |> str} </p>
        <p className="title is-4">
          {"By " ++ authorName |> str}
          <br />
          <span className=dateStyles> {localCreatedAt |> str} </span>
        </p>
        <div className="content">
          {summary |> str}
          <p> <Tags tags /> </p>
        </div>
      </div>
    </div>
  </div>;
};

let default = make;
