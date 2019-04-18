const mongoose = require('mongoose');
const Schema = mongoose.Schema;

// Define collection and schema for Package
let Package = new Schema({
  person_name: {
    type: String
  },
  package_name: {
    type: String
  },
  package_number: {
    type: Number
  }
},{
    collection: 'package'
});

module.exports = mongoose.model('Package', Package);