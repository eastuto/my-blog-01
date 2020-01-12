[@react.component]
let make = (~tags: array(string)) => {
  tags
  |> Array.mapi((index, tag) =>
       <Tag text=tag key={string_of_int(index) ++ "-" ++ tag} />
     )
  |> ReasonReact.array;
};

let default = make;
