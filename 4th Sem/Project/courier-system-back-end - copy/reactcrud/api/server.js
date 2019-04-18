const express = require('express');
const app = express();
const bodyParser = require('body-parser');
const PORT = 4000;
const cors = require('cors');
const mongoose = require('mongoose');
const config = require('./DB.js');
const packageRoute = require('./package.route');
const shortId = require('mongodb-short-id');

var _id = shortId.longToShort('5c7cb7f2d6506a2ecc0ec2f4');
console.log(_id);

mongoose.Promise = global.Promise;
mongoose.connect(config.DB, { useNewUrlParser: true }).then(
  () => {console.log('Database is connected') },
  err => { console.log('Can not connect to the database'+ err)}
);

app.use(cors());
app.use(bodyParser.urlencoded({extended: true}));
app.use(bodyParser.json());

app.use('/package', packageRoute);

app.listen(PORT, function(){
  console.log('Server is running on Port:',PORT);
});