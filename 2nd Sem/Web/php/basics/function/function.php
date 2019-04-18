<?php
function writeMsg() {
    echo "Hello world! <br><br>";
}

writeMsg(); // call the function
?>

<?php
/*
// Function Argument
function familyName($fname) {
    echo "$fname Royce Refsnes.<br><br>";
}

familyName("Jani");
familyName("Hege");
familyName("Stale");
familyName("Kai Jim");
familyName("Borge"); 
*/
?> 

<?php

//function with two arguments ($fname and $year):
function familyName($fname, $year) {
     echo "$fname Born in $year <br><br>";
}

familyName("Hege","1975");
familyName("Stale","1978");
familyName("Kai Jim","1983");

?>

<?php
//Default Argument Value
function setHeight($minheight = 50) {
    echo "The height is : $minheight <br><br>";
}

setHeight(350);
setHeight(); // will use the default value of 50
setHeight(135);
setHeight(80);
?>

<?php
//Functions with Returning values
function sum($x, $y) {
    $z = $x + $y;
    return $z;
}

echo "5 + 10 = " . sum(5, 10) . "<br><br>";
echo "7 + 13 = " . sum(7, 13) . "<br><br>";
echo "2 + 4  = " . sum(2, 4)  ."<br><br>";
?>

