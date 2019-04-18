<!DOCTYPE html>
<html>
<body>
<?php
$x = 5;
$y = 10;

function myTest() {
    global $x, $y;
    $y = $x + $y;
}

myTest();  // run function
echo $y; // output the new value for variable $y

function myTest1() {
    $GLOBALS['y'] = $GLOBALS['x'] + $GLOBALS['y'];
}

myTest1();
echo $y; // outputs 20

?>

</body>
</html>