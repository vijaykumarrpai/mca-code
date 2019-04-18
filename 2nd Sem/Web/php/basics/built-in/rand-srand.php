<!DOCTYPE html>
<html>
<body>
<?php
echo "Rand Function without parameter <br>";
echo(rand() . "<br>");
echo "<br>"; 
echo "Rand Function with parameter<br/>";
echo(rand(10,12)."<br>");
echo "<br>"; 
?>

<?php
echo "Set Time<br/>";
echo (mktime()."<br/>");
echo "mktime(hour,minute,second,month,day,year,is_dst)";

echo "<br>"; 
//The srand() function seeds the random number generator (rand()).
//Syntax: srand(seed);
//A random seed (or seed state, or just seed) is a number (or vector) used to initialize a pseudorandom number generator.
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