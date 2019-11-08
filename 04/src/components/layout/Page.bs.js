// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE

import * as Css from "bs-css/src/Css.js";
import * as React from "react";
import * as Head from "next/head";
import * as Footer$MyBlog from "./Footer.bs.js";
import * as Navbar$MyBlog from "./Navbar.bs.js";

((require('bulma')));

Css.$$global("p", /* :: */[
      Css.marginBottom(Css.px(20)),
      /* [] */0
    ]);

function Page(Props) {
  var children = Props.children;
  return React.createElement(React.Fragment, undefined, React.createElement(Head.default, {
                  children: null
                }, React.createElement("meta", {
                      content: "width=device-width, initial-scale=1, shrink-to-fit=no, viewport-fit=cover",
                      name: "viewport"
                    }), React.createElement("title", undefined, "Man Vs Code")), React.createElement(Navbar$MyBlog.make, { }), children, React.createElement(Footer$MyBlog.make, { }));
}

var make = Page;

export {
  make ,
  
}
/*  Not a pure module */
