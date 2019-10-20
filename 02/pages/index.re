let str = React.string;

[@react.component]
let make = () =>
  <Section
    title="Man Vs Code"
    subtitle="A blog application demonstrating ReasonML, ReasonReact and Next.js">
    <p>
      {"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Id aliquet lectus proin nibh nisl condimentum id. Vehicula ipsum a arcu cursus vitae congue. Libero enim sed faucibus turpis in eu mi bibendum. Lectus mauris ultrices eros in. Tincidunt lobortis feugiat vivamus at augue eget. Porta non pulvinar neque laoreet suspendisse interdum consectetur. Pellentesque diam volutpat commodo sed egestas egestas fringilla. Porta lorem mollis aliquam ut porttitor leo a diam sollicitudin. Neque viverra justo nec ultrices dui sapien eget mi. Et molestie ac feugiat sed lectus vestibulum mattis ullamcorper."
       |> str}
    </p>
    <p>
      {"Vitae congue mauris rhoncus aenean vel elit scelerisque mauris. Velit euismod in pellentesque massa placerat duis ultricies. Tellus integer feugiat scelerisque varius morbi enim. Tortor id aliquet lectus proin nibh nisl condimentum. Eget nulla facilisi etiam dignissim diam quis. Ac feugiat sed lectus vestibulum mattis ullamcorper velit. Sagittis orci a scelerisque purus semper. Fusce ut placerat orci nulla pellentesque dignissim enim sit amet. Ultricies tristique nulla aliquet enim tortor at auctor. Rhoncus mattis rhoncus urna neque. Nulla aliquet enim tortor at. Quam nulla porttitor massa id neque aliquam vestibulum morbi blandit. Amet consectetur adipiscing elit pellentesque habitant morbi. Venenatis lectus magna fringilla urna. Commodo nulla facilisi nullam vehicula."
       |> str}
    </p>
  </Section>;
let default = make;
