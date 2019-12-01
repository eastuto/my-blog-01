open Css;

let linkStyle = selector("a", [color(rgb(242, 242, 242))]);
let linkHover = selector("a:hover", [borderBottom(px(1), solid, white)]);

let subtitle =
  merge([
    style([
      color(rgba(255, 255, 255, 0.7)),
      fontWeight(bold),
      marginTop(px(13)),
      marginLeft(px(10)),
      important(marginBottom(px(0))),
    ]),
    "subtitle",
  ]);

let navbarBrand =
  merge([
    style([fontFamily("Open Sans, Helvetica Neue, Arial, sans-serif")]),
    "navbar-brand",
  ]);

let topnavStyles =
  merge([style([background(rgb(0, 107, 198))]), "navbar", "main-title"]);

let navbarMenu = (menuIsActive: bool) =>
  merge([
    style([paddingTop(px(0))]),
    {
      menuIsActive ? "is-active" : "";
    },
    "navbar-menu",
  ]);

let navbarItem =
  merge([
    style([
      background(rgb(0, 107, 198)),
      color(rgb(242, 242, 242)),
      linkStyle,
      linkHover,
    ]),
    "navbar-item",
  ]);

let navbarBurger = (menuIsActive: bool) =>
  merge([
    style([color(rgba(255, 255, 255, 0.7))]),
    {
      menuIsActive ? "is-active" : "";
    },
    "navbar-burger",
    "burger",
  ]);
