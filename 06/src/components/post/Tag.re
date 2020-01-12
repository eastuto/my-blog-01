[@react.component]
let make = (~text: string=?) => {
  <a href="#">
    <span className="tag is-info is-rounded">
      {React.string("#" ++ text)}
    </span>
  </a>;
};

let default = make;
