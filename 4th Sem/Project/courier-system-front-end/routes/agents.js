const express = require('express');
const agents = express.Router();
const Agent = require('../models/agent');

// to fetch the index page
agents.get('/', (req, res, next) => {
    return res.sendFile(path.join(__dirname + '/index/index.html'));
});

// to check whether the password and password Confirmation is same or not
agents.post('/', (req, res, next) => {
    if (req.body.password !== req.body.passwordConf) {
        const err = new Error('Please enter correct password');
        err.status = 400;
        res.send("Please enter correct password");
        return next(err);
    }

    // To verify all the entries and store it in agentData
    if(req.body.name && req.body.email && req.body.mobno && req.body.address && req.body.password && req.body.passwordConf) {
        var agentData = {
            name: req.body.name,
            email: req.body.email,
            mobno: req.body.mobno,
            address: req.body.address,
            password: req.body.password,
            passwordConf: req.body.passwordConf,
        }

        Agent.create(agentData, (error, agent) => {
            if(error) {
                return next(error);
            } else {
                req.session.agentId = agent._id;
                return res.redirect('/profile');
            }
        });
// To check whether the entered email and password is valid or not
    } else if (req.body.logemail && req.body.logpassword) {
        Agent.authenticate(req.body.logemail, req.body.logpassword, (error, agent) => {
            if(error || !agent) {
                const err = new Error('Wrong email or password or not a registered agent');
                err.status = 401;
                return next(err);
            } else {
                req.session.agentId = agent._id;
                return res.redirect('/profile');
            }
        });
    } else {
        const err = new Error('All fields are required');
        err.status = 400;
        return next(err);
    }
})

// To create agent profile and display name and email id
agents.get('/profile', (req, res, next) => {
    Agent.findById(req.session.agentId)
    .exec((error, agent) => {
        if (error) {
            return next(error);
        } else {
            if (agent === null) {
                const err = new Error('Not authorized! Go back!');
                err.status = 400;
                return next(err);
            } else {
                return res.send('<h1> Name: </h1>' + agent.name + '<h2>Email: </h2>' + agent.email + '<br><a type = "button" href="/logout">Logout</a>')
            }
        }
    });
});

// To logout
agents.get('/logout', (req, res, next) => {
    if(req.session) {
        req.session.destroy((err) => {
            if (err) {
                return next(err);
            } else {
                return res.redirect('/');
            }
        });
    }
});

module.exports = agents;