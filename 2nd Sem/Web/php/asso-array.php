<!DOCTYPE html>
<html>
<body>
<?php
//Associative arrays are arrays that use named keys that you assign to them.The named keys can then be used in a script

$age = array("Akshay"=>"25", "Abhilash"=>"26", "Sujath"=>"24");
echo "Akshay is " . $age['Akshay'] . " years old";
 echo "<br>";
 
$age['Peter'] = "35";
$age['Ben'] = "37";
$age['Joe'] = "43"; 

echo "Ben is " . $age['Ben'] . " years old";
 echo "<br>";
//oop through and print all the values of an associative array
foreach($age as $x => $x_value) {
    echo "Key=" . $x . ", Value=" . $x_value;
    echo "<br>";
}
?></body></html>
