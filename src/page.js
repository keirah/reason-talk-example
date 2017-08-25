import React, { Component } from 'react';

class Page extends Component {
  handleClick() {
    console.log("clicked!")
  }
  render() {
    return (
      <div onClick={this.handleClick}>
      {this.props.pageOutput}
      </div>
    );
  }
}

export default Page;