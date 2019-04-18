const express = require('express');
const router = express.Router();
const Customer = require('../models/customer');

// to fetch the index page
router.get('/', (req, res, next) => {
    return res.sendFile(path.join(__dirname + '/index/index.html'));
});

// to check whether the password and password Confirmation is same or not
router.post('/', (req, res, next) => {
    if (req.body.password !== req.body.passwordConf) {
        const err = new Error('Please enter correct password');
        err.status = 400;
        res.send("Please enter correct password");
        return next(err);
    }

    // To verify all the entries and store it in customerData
    if(req.body.name && req.body.email && req.body.mobno && req.body.address && req.body.password && req.body.passwordConf) {
        var customerData = {
            name: req.body.name,
            email: req.body.email,
            mobno: req.body.mobno,
            address: req.body.address,
            password: req.body.password,
            passwordConf: req.body.passwordConf,
        }

        Customer.create(customerData, (error, customer) => {
            if(error) {
                return next(error);
            } else {
                req.session.customerId = customer._id;
                return res.redirect('http://localhost:3001/');
            }
        });
// To check whether the entered email and password is valid or not
    } else if (req.body.logemail && req.body.logpassword) {
        Customer.authenticate(req.body.logemail, req.body.logpassword, (error, customer) => {
            if(error || !customer) {
                const err = new Error('Wrong email or password or not a registered customer');
                err.status = 401;
                return next(err);
            } else {
                req.session.customerId = customer._id;
                return res.redirect('http://localhost:3001/');
            }
        });
    } else {
        const err = new Error('All fields are required');
        err.status = 400;
        return next(err);
    }
})

// To create customer profile and display name and email id
router.get('/profile', (req, res, next) => {
    Customer.findById(req.session.customerId)
    .exec((error, customer) => {
        if (error) {
            return next(error);
        } else {
            if (customer === null) {
                const err = new Error('Not authorized! Go back!');
                err.status = 400;
                return next(err);
            } else {
                return res.send('<h1> Name: </h1>' + customer.name + '<h2>Email: </h2>' + customer.email + '<br><a type = "button" href="/logout">Logout</a>')
            }
        }
    });
});

// To logout
router.get('/logout', (req, res, next) => {
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

module.exports = router;