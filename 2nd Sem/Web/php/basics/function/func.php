<?php
//Passing arrays to functions
function takes_array($input)
{
    echo "$input[0] + $input[1] = ", $input[0]+$input[1];
}
?>

<?php
// Passing function parameters by reference
function add_some_extra(&$string)
{
    $string .= 'and something extra.';
}
$str = 'This is a string, ';
add_some_extra($str);
echo $str."<br><br>";    // outputs 'This is a string, and something extra.'
?>
 
<?php
//Use of default parameters in functions
function makecoffee($type = "cappuccino")
{
    return "Making a cup of $type.\n";
}
echo makecoffee();
echo makecoffee(null);
echo makecoffee("espresso");
?>

<?php
//pass a variable by reference to a function 
function foo(&$var)
{
    $var++;
}

$a=5;
foo($a);
echo "Pass a variable by reference program <br>";
echo $a."<br><br>";  // $a is 6 here
?>

<?php

//Call by value program
function abc($x)
{
    $x=$x+10;
    return($x);
}
echo "Call by value program <br>";
$a=20;
echo abc($a)."<br>";
echo ($a."<br><br>");
?>