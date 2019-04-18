<!DOCTYPE html>
<html lang="en">
<head>
    <title>PHP Integers</title>
</head>
<body>
<!--This function displays structured information about one or more expressions that includes its type and value. Arrays and objects are explored recursively with values indented to show structure. -->
<?php
$a = 123; // decimal number
var_dump($a);
echo "<br>";
 
$b = -123; // a negative number
var_dump($b);
echo "<br>";
 
$c = 0x1A; // hexadecimal number
var_dump($c);
echo "<br>";
 
$d = 0123; // octal number
var_dump($d);
?>

</body>
</html>     