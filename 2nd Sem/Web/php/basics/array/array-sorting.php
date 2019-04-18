<!-- sorting.php - An example to illustrate several of thesorting functions -->
<html xmlns = "http://www.w3.org/1999/xhtml">
<head><title> Sorting</title>
</head>
<body>
<?php
$numbers = array(4, 6, 2, 'Welcome', 11);
sort($numbers);

$arrlength = count($numbers);
for($x = 0; $x < $arrlength; $x++) {
    echo $numbers[$x];
    echo "<br>";
}
?>
 <?php
 echo "<br/>";
$cars = array("Volvo", "BMW", "Toyota");
sort($cars);
$clength = count($cars);
for($x = 0; $x < $clength; $x++) {
    echo $cars[$x];
    echo "<br>";
}
?> 
 <?php

 $original = array("Fred" =>31, "A1" => 27,"Gandalf " => "wizard",
                           "Betty" => 42, "Frodo" =>"hobbit");

?>
<h4> Original Array </h4>
<?php
     foreach ($original as $key => $value)
          print("[$key] => $value <br />");


$new = $original;
sort($new);
?>
<h4> Array sorted with sort </h4>

<?php
     foreach ($original as $key => $value)
          print("[$key] => $value <br />");

$new = $original;
asort($new);
?>
<h4> Array sorted with asort </h4>

<?php
     foreach ($original as $key => $value)
          print("[$key] => $value <br />");

$new = $original;
ksort($new);
?>
<h4> Array sorted with ksort </h4>

<?php
  foreach ($new as $key => $value)
    print("[$key] = $value <br />");
?>
</body>
</html>  
 

















