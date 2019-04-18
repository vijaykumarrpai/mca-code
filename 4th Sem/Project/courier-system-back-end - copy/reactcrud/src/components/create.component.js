import React, { Component } from 'react';
import axios from 'axios';

export default class Create extends Component {
  constructor(props) {
    super(props);
    this.onChangePersonName = this.onChangePersonName.bind(this);
    this.onChangePackageName = this.onChangePackageName.bind(this);
    this.onChangePackageNumber = this.onChangePackageNumber.bind(this);
    this.onSubmit = this.onSubmit.bind(this);

    this.state = {
      person_name: '',
      package_name: '',
      package_number:''
    }
  }
  onChangePersonName(e) {
    this.setState({
      person_name: e.target.value
    });
  }
  onChangePackageName(e) {
    this.setState({
      package_name: e.target.value
    })  
  }
  onChangePackageNumber(e) {
    this.setState({
      package_number: e.target.value
    })
  }

  onSubmit(e) {
    e.preventDefault();
    const obj = {
      person_name: this.state.person_name,
      package_name: this.state.package_name,
      package_number: this.state.package_number
    };
    axios.post('http://localhost:4000/package/add', obj)
        .then(res => console.log(res.data));
    
    this.setState({
      person_name: '',
      package_name: '',
      package_number: ''
    })
  }
 
  render() {
    return (
        <div style={{ marginTop: 10 }}>
            <h3 align="center">Add New Package</h3>
            <form onSubmit={this.onSubmit}>
                <div className="form-group">
                    <label>Person Name:  </label>
                    <input 
                      type="text" 
                      className="form-control" name = "personname"
                      value={this.state.person_name}
                      onChange={this.onChangePersonName}
                      />
                </div>
                <div className="form-group">
                    <label>Package Name: </label>
                    <input type="text" 
                      className="form-control" name = "packagename"
                      value={this.state.package_name}
                      onChange={this.onChangePackageName}
                      />
                </div>
                <div className="form-group">
                    <label>Package Number: </label>
                    <input type="text" 
                      className="form-control" name = "packageno"
                      value={this.state.package_number}
                      onChange={this.onChangePackageNumber}
                      />
                </div>
                <div className="form-group">
                    <input type="submit" 
                      value="Register Parcel" name = "submit"
                      className="btn btn-primary"/>
                </div>
            </form>
        </div>
    )
  }
}