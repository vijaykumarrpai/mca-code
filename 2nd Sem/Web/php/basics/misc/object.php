<!DOCTYPE html>
<html>
<body>

<?php
class Car {
    function Car() {
        $this->model = "X Series";
    }
}
// create an object
$carmod = new Car();

// show object properties
echo $carmod->model;
?>
</body>
</html>