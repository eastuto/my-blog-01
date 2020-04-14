// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE

import * as React from "react";
import * as Section$MyBlog from "../src/components/layout/Section.bs.js";
import * as AuthorQuery$MyBlog from "../src/components/author/AuthorQuery.bs.js";
import * as UserContext$MyBlog from "../src/components/user/UserContext.bs.js";

function Author(Props) {
  var match = UserContext$MyBlog.useUser(/* () */0);
  var user = match[0];
  if (user) {
    var authorResult = AuthorQuery$MyBlog.getAuthorByUserId(user[0].id);
    var len = authorResult.length;
    if (len !== 1) {
      if (len !== 0) {
        return React.createElement(Section$MyBlog.make, {
                    title: "Sorry you're not an Author"
                  });
      } else {
        return React.createElement(Section$MyBlog.make, {
                    title: "Sorry you're not an Author"
                  });
      }
    } else {
      var author = authorResult[0];
      return React.createElement(Section$MyBlog.make, {
                  title: "Congratulations " + author.firstName,
                  subtitle: "You're an author"
                });
    }
  } else {
    return React.createElement(Section$MyBlog.make, {
                title: "403 Unauthorized"
              });
  }
}

var make = Author;

var $$default = Author;

export {
  make ,
  $$default ,
  $$default as default,
  
}
/* react Not a pure module */