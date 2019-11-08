[@react.component]
let make = (~tags: array(string)) => {
  tags |> Array.map(tag => <Tag text=tag />) |> ReasonReact.array;
};

let default = make;
