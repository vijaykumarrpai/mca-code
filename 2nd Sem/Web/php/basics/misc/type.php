<?php

$foo = "0";  // $foo is string (ASCII 48)
echo "$foo <br />";

$foo += 2;   // $foo is now an integer (2)
echo "$foo <br />";

$foo = $foo + 1.3;  // $foo is now a float (3.3)
echo "$foo <br />";

// String conversion to numbers. 
$foo = 5 + "10 Little Piggies"; // $foo is integer (15)
echo "$foo <br />";
?>

<?php
//String access by character
$a    = 'car'; // $a is a string
$a[0] = 'b';   // $a is still a string
echo "$a <br />";       // bar
?>

<?php
//Type casting in PHP is written in parentheses before the variable
$foo = 10;   // $foo is an integer
$bar = (boolean) $foo;   // $bar is a boolean
echo "$bar <br />";
?>

<?php
//Set the type of variable var to type. 
$foo = "5bar"; // string
echo "$foo <br />";

$bar = true;   // boolean
echo "$bar <br />";

settype($foo, "integer"); // $foo is now 5   (integer)
echo "$foo <br />";

settype($bar, "string");  // $bar is now "1" (string)
echo "$bar <br />";
?>