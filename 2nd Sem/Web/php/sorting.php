<!-- sorting.php - An example to illustrate several of thesorting functions -->
<html xmlns = "http://www.w3.org/1999/xhtml">
<head><title> Sorting</title>
</head>
<body>


<?php
 $original = array("Mike", "A1" , "60", 42, "Frodo");
?>
<h4> Original Array </h4>
<?php
     foreach ($original as  $value)
          print("$value <br />");
?>
<h4> Array sorted with sort </h4>
<?php
$new = $original;
sort($new);
     foreach ($new as $value)
          print("$value <br />");


?>
<h4> Array sorted with rsort </h4>
<?php
$new = $original;
rsort($new);
     foreach ($new as $value)
          print("$value <br />");


?>
<h4> Array sorted with asort </h4>

<?php

$new = $original;
asort($new);
     foreach ($new as  $value)
          print("$value <br />");

?>
<h4> Array sorted with arsort </h4>

<?php
$new = $original;
arsort($new);
  foreach ($new as $value)
    print("$value <br />");

?>
</body>
</html>  
 

















