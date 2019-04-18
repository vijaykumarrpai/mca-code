const express = require('express');
const app = express();
const bodyParser = require('body-parser');
const cors = require('cors');
const mongoose = require('mongoose');
const session = require('express-session');
const MongoStore = require('connect-mongo')(session);

mongoose.connect('mongodb://localhost:27017/vascourier', {useNewUrlParser: true});
const db = mongoose.connection;

db.on('error', console.error.bind(console, 'connection error:'));
db.once('open', function() {

});

app.use(session({
    secret: 'secret123',
    resave: true,
    saveUninitialized: false,
    store: new MongoStore({
        mongooseConnection: db
    })
}));

const port = 3000;

app.use(cors());
app.use(bodyParser.json());
app.use(bodyParser.urlencoded({extended: false}));

app.use(express.static(__dirname + '/index'));

const routes = require('./routes/customers');

app.use('/', routes);

app.use((req, res, next) => {
    const err = new Error('File Not Found');
    console.log(`${req.method} - ${req.url} - ${req.ip} - ${new Date()}`);
    err.status = 404;
    next(err);
});

app.use((err, req, res, next) => {
    res.status(err.status || 500);
    res.send(err.message);
}); 

app.listen(port, () => {
    console.log('Listening to port', port);
})