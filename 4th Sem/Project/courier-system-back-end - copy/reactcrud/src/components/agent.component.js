import React, { Component } from 'react';
import axios from 'axios';
import TableRow from './TableRow2';

export default class Agent extends Component {

  constructor(props) {
      super(props);
      this.state = {package: []};
    }
    componentDidMount(){
      axios.get('http://localhost:4000/package')
        .then(response => {
          this.setState({ package: response.data });
        })
        .catch(function (error) {
          console.log(error);
        })
    }
    tabRow(){
      return this.state.package.map(function(object, i){
          return <TableRow obj={object} key={i} />;
      });
    }

    render() {
      return (
        <div>
          <h3 align="center">Active Agents</h3>
          <table className="table table-striped" style={{ marginTop: 20 }}>
            <thead>
              <tr>
                <th>Agent id</th>
                <th>Agent's Name</th>
                <th>Package to be delivered</th>
              </tr>
            </thead>
            <tbody>
              { this.tabRow() }
            </tbody>
          </table>
        </div>
      );
    }
  }