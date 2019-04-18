<?php
$foo = 10;   // $foo is an integer
$bar = (boolean) $foo;   // $bar is a boolean
echo $bar."<br>";

$string = "$foo"; 
$binary = (binary) $string;
$binary = b"binary string";
echo $binary."<br>";
?>
