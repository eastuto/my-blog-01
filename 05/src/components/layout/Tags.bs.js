// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE

import * as $$Array from "bs-platform/lib/es6/array.js";
import * as React from "react";
import * as Tag$MyBlog from "../Tag.bs.js";

function Tags(Props) {
  var tags = Props.tags;
  return $$Array.mapi((function (index, tag) {
                return React.createElement(Tag$MyBlog.make, {
                            text: tag,
                            key: String(index) + ("-" + tag)
                          });
              }), tags);
}

var make = Tags;

var $$default = Tags;

export {
  make ,
  $$default ,
  $$default as default,
  
}
/* react Not a pure module */
