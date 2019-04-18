<?php
//Associative arrays are arrays that use named keys that you assign to them.The named keys can then be used in a script

$age = array("Akshay"=>"25", "Abhilash"=>"26", "Sujath"=>"24");
echo "Akshay is " . $age['Akshay'] . " years old";
foreach($age as $x => $x_value) {
    echo "Key=" . $x . ", Value=" . $x_value;
    }
?>