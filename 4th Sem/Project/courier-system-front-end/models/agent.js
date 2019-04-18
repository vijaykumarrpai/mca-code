const mongoose = require('mongoose');
const bcrypt = require('bcryptjs');
const validator = require('email-validator');

// Define collection and schema for agent
const AgentSchema = new mongoose.Schema({
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
  }
});

// Authenticating whether agent exist or not
AgentSchema.statics.authenticate = function (email, password, callback) {
  Agent.findOne({ email: email })
    .exec(function (err, agent) {
      if (err) {
        return callback(err)
      } else if (!agent) {
        var err = new Error('Agent not found.');
        err.status = 401;
        return callback(err);
      }
      bcrypt.compare(password, agent.password, function (err, result) {
        if (result === true) {
          return callback(null, agent);
        } else {
          return callback();
        }
      })
    });
}
// Storing the agent password and hashing it
AgentSchema.pre('save', function(next) {
    let agent = this;
    bcrypt.genSalt(10).then((salt) => {
        bcrypt.hash(agent.password, salt).then((encryptedPassword) => {
            agent.password = encryptedPassword;
            next();
        });
    })
});

// Storing the password confirmation and hashing it
AgentSchema.pre('save', function(next) {
    let agent = this;
    bcrypt.genSalt(10).then((salt) => {
        bcrypt.hash(agent.passwordConf, salt).then((encryptedPassword) => {
            agent.passwordConf = encryptedPassword;
            next();
        });
    })
});

var Agent = mongoose.model('Agent', AgentSchema);
module.exports = Agent;
