let str = React.string;

[@react.component];
let make = () =>
  <Section title="About" subtitle="This is the about page">
    <p>
      {"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Id aliquet lectus proin nibh nisl condimentum id. Vehicula ipsum a arcu cursus vitae congue. Libero enim sed faucibus turpis in eu mi bibendum. Lectus mauris ultrices eros in. Tincidunt lobortis feugiat vivamus at augue eget. Porta non pulvinar neque laoreet suspendisse interdum consectetur. Pellentesque diam volutpat commodo sed egestas egestas fringilla. Porta lorem mollis aliquam ut porttitor leo a diam sollicitudin. Neque viverra justo nec ultrices dui sapien eget mi. Et molestie ac feugiat sed lectus vestibulum mattis ullamcorper."
       |> str}
    </p>
  </Section>;
let default = make;
