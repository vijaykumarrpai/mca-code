const express = require('express');
const packageRoutes = express.Router();

let Package = require('./package.model');

packageRoutes.route('/add').post(function (req, res) {
  let package = new Package(req.body);
  package.save()
    .then(package => {
      res.status(200).json({'package': 'package in added successfully'});
    })
    .catch(err => {
    res.status(400).send("unable to save to database");
    });
});

packageRoutes.route('/').get(function (req, res) {
    Package.find(function(err, packages){
    if(err){
      console.log(err);
    }
    else {
      res.json(packages);
    }
  });
});

packageRoutes.route('/edit/:id').get(function (req, res) {
  let id = req.params.id;
  Package.findById(id, function (err, package){
      res.json(package);
  });
});

packageRoutes.route('/update/:id').post(function (req, res) {
    Package.findById(req.params.id, function(err, package) {
    if (!package)
      res.status(404).send("data is not found");
    else {
        package.person_name = req.body.person_name;
        package.package_name = req.body.package_name;
        package.package_number = req.body.package_number;

        package.save().then(package => {
          res.json('Update complete');
      })
      .catch(err => {
            res.status(400).send("unable to update the database");
      });
    }
  });
});

packageRoutes.route('/delete/:id').get(function (req, res) {
    Package.findByIdAndRemove({_id: req.params.id}, function(err, package){
        if(err) res.json(err);
        else res.json('Successfully removed');
    });
});

packageRoutes.route('/:id').get((req, res) => {
  let id = req.params.id;
  Package.findById(id).then((package) => {
    if(Package) {
      res.send(Package);
    } else {
      res.status(404).send({
        notice: 'Package not found'
      })
    }
  })
  .catch((err) => {
    res.send(err);
  })
});

module.exports = packageRoutes;