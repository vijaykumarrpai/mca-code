<!DOCTYPE html>
<html>
<body>

<?php
$x = 75;
$y = 25;

function addition() {
    $GLOBALS['z'] = $GLOBALS['x'] + $GLOBALS['y'];
}

addition();
// z is a variable present within the $GLOBALS array, it is also accessible from outside the function!
echo $z;
?>

</body>
</html>