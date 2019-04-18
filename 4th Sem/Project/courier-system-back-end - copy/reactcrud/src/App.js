import React, { Component } from 'react';
import 'bootstrap/dist/css/bootstrap.min.css';
import { BrowserRouter as Router, Switch, Route, Link } from 'react-router-dom';

import Create from './components/create.component';
import Edit from './components/edit.component';
import Index from './components/index.component';
import Agent from './components/agent.component';
import Logout from './components/logout.component';

class App extends Component {
  render() {
    return (
      <Router>
        <div className="container">
          <nav className="navbar navbar-expand-lg navbar-light bg-light">
            <Link to={'/'} className="navbar-brand">Hello Admin</Link>
            <div className="collapse navbar-collapse" id="navbarSupportedContent">
              <ul className="navbar-nav mr-auto">
              <li className="nav-item">
                  <Link to={'/'} className="nav-link">Home</Link>
                </li>
                <li className="nav-item">
                  <Link to={'/create'} className="nav-link">Create</Link>
                </li>
                <li className="nav-item">
                  <Link to={'/index'} className="nav-link">Index</Link>
                </li>
                <li className="nav-item">
                  <Link to={'/agent'} className="nav-link">Agent</Link>
                </li>
                <li className="nav-item">
                  <Link to={'/settings'} className="nav-link">Settings</Link>
                </li>
                <li className="nav-item">
                  <Link to={'/logout'} className="nav-link">Log Out</Link>
                </li>
              </ul>
            </div>
          </nav>
          <br/>
          <h2>Admin Panel</h2>
          <Switch>
              <Route exact path='/create' component={ Create } />
              <Route path='/edit/:id' component={ Edit } />
              <Route path='/index' component={ Index } />
              <Route path='/agent' component={ Agent } />
              <Route path='/logout' component={ Logout } />
          </Switch>
        </div>
      </Router>
    );
  }
}

export default App;