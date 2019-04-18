<!DOCTYPE html>
<html>
<body>

<?php
/*A multidimensional array is an array containing one or more arrays.

PHP understands multidimensional arrays that are two, three, four, five, or more levels deep.
 The dimension of an array indicates the number of indices you need to select an element.

    For a two-dimensional array you need two indices to select an element
    For a three-dimensional array you need three indices to select an element
*/


$cars = array
  (
  array("Celerio",22,18),
  array("Nano",15,13),
  array("Eon",5,2),
  array("Reva",17,15)
  );
  
echo $cars[0][0].": In stock: ".$cars[0][1].", sold: ".$cars[0][2].".<br>";
echo $cars[1][0].": In stock: ".$cars[1][1].", sold: ".$cars[1][2].".<br>";
echo $cars[2][0].": In stock: ".$cars[2][1].", sold: ".$cars[2][2].".<br>";
echo $cars[3][0].": In stock: ".$cars[3][1].", sold: ".$cars[3][2].".<br>";
//Loop inside another For loop to get the elements of the $cars array (we still have to point to the two indices)
for ($row = 0; $row < 4; $row++) {
  echo "<p><b>Row number $row</b></p>";
  echo "<ul>";
  for ($col = 0; $col <= 3; $col++) {
    echo "<li>".$cars[$row][$col]."</li>";
  }
  echo "</ul>";
}
?>

</body>
</html>
