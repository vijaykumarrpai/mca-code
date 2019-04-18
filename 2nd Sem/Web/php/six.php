<!DOCTYPE HTML>
<html>
<head>
    <title>Case Sensitivity in PHP</title>
</head>
<body>

<?php
// Assign values to variables
$color = "blue";
$Color = "red";
$COLOR = "green";
 
// Try to print variables values
echo "The color of the sky is " . $color . "<br>";
echo "The color of the sun is " . $Color . "<br>";
echo "The color of the tree is " . $COLOR . "<br>";
?>

</body>
</html>    