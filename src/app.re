[%bs.raw {|require('./app.css')|}];

external logo : string = "./logo.svg" [@@bs.module];

let component = ReasonReact.statelessComponent "App";

let make ::pageOutput _children => {
  ...component,
  render: fun _self => <div className="App"> <PageWrap pageOutput /> </div>
};
