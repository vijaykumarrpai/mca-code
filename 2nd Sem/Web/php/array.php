<!DOCTYPE html>
<html>
<body>

<?php
//array stores multiple values in one single variable
$cars = array("Maruti", "Hundai", "Toyota");
$cars[]= "Mecedes";

echo "I like " . $cars[0] . ", " . $cars[1] . " and " . $cars[2] .$cars[3]."</br>";
//count() function is used to return the length (the number of elements) of an array:
echo "Total Count ".count($cars)."</br>";

//loop for printing all the values of an indexed array
$arrlength = count($cars);

for($x = 0; $x < $arrlength; $x++) {
    echo $cars[$x];
    echo "<br>";
}
?>

</body>
</html>