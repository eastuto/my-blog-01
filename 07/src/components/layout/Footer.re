let str = React.string;

module Styles = {
  open Css;

  let footerStyles =
    merge([style([background(rgb(244, 244, 244))]), "footer"]);
};

[@react.component]
let make = () => {
  <footer className=Styles.footerStyles>
    <div className="content has-text-centered">
      <p>
        <strong> {"My Blog " |> str} </strong>
        {"was made with ReasonML ReasonReact and Next.js" |> str}
      </p>
    </div>
  </footer>;
};
