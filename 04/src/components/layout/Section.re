[@react.component]
let make = (~title: string, ~subtitle: string=?, ~children: React.element=?) => {
  <section className="section is-fluid">
    <div className="container">
      <h1 className="title"> {React.string(title)} </h1>
      <h2 className="subtitle"> {React.string(subtitle)} </h2>
      children
    </div>
  </section>;
};
