<!DOCTYPE html>
<html>
<body>
<?php
// case-insensitive constant name
define("MY", 100, true);

echo MY;
$arr=array(10,"Dog", 20,"Cat");
/*
define('ANIMALS', array(
    'dog',
    'cat',
    'bird'
));
echo ANIMALS[1]; // outputs "cat"
*/
echo $arr[0];
?> 
</body>
</html>
