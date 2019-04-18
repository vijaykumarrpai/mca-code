const mongoose = require('mongoose');
const bcrypt = require('bcryptjs');
const validator = require('email-validator');

// Define collection and schema for Customer
const CustomerSchema = new mongoose.Schema({
  name: {
    type: String,
    unique: true,
    trim: true,
    minlength: 4,
    maxlength: 64
  },
  email: {
    type: String,
    unique: true,
    required: true,
    trim: true,
    validate: {
      validator: function(value) {
        return validator.validate(value);
      },
      message: function() {
        return 'Invalid email format'
      }
    }
  },
  mobno: {
    type: Number,
    unique: true,
    required: true,
    minlength: 10,
    maxlength: 13
  },
  address: {
    type: String,
    required: true,
    maxlength: 120
  },
  password: {
    type: String,
    required: true,
    minlength: 8,
    maxlength: 64
  },
  passwordConf: {
    type: String,
    required: true,
    minlength: 8,
    maxlength: 64
  },
  latitude: {
    type: Number
  },
  longitude: {
    type: Number
  }
});

// Authenticating whether Customer exist or not
CustomerSchema.statics.authenticate = function (email, password, callback) {
  Customer.findOne({ email: email })
    .exec(function (err, customer) {
      if (err) {
        return callback(err)
      } else if (!customer) {
        var err = new Error('Customer not found.');
        err.status = 401;
        return callback(err);
      }
      bcrypt.compare(password, customer.password, function (err, result) {
        if (result === true) {
          return callback(null, customer);
        } else {
          return callback();
        }
      })
    });
}
// Storing the customer password and hashing it
CustomerSchema.pre('save', function(next) {
    let customer = this;
    bcrypt.genSalt(10).then((salt) => {
        bcrypt.hash(customer.password, salt).then((encryptedPassword) => {
            customer.password = encryptedPassword;
            next();
        });
    })
});

// Storing the password confirmation and hashing it
CustomerSchema.pre('save', function(next) {
    let customer = this;
    bcrypt.genSalt(10).then((salt) => {
        bcrypt.hash(customer.passwordConf, salt).then((encryptedPassword) => {
            customer.passwordConf = encryptedPassword;
            next();
        });
    })
});

var Customer = mongoose.model('Customer', CustomerSchema);
module.exports = Customer;
