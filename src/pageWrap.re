external page : ReasonReact.reactClass = "./page" [@@bs.module];

let make ::pageOutput _children =>
  ReasonReact.wrapJsForReason reactClass::page props::{"pageOutput": pageOutput} _children;
