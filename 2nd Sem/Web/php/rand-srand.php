<!DOCTYPE html>
<html>
<body>
<?php
echo "Rand Function without parameter <br>";
echo(rand() . "<br>");
echo "<br>"; 
echo "Rand Function with parameter<br/>";
echo(rand(10,18)."<br>");
echo "<br>"; 
?>

<?php
echo "Set Time<br/>";
echo (mktime()."<br/>");
echo "<br>"; 
//The srand() function seeds the random number generator (rand()).
//Syntax: srand(seed);
srand(mktime());
echo rand()."<br />";

?> 

<?php
echo "<br>"; 
//The srand() function seeds the random number generator (rand()).
echo "Day no. generation <br />";
echo (date("d")."<br>");
echo "<br>"; 
srand(date("d"));

echo rand()."<br />";
?> 
</body>
</html>