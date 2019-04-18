<?php
$x = 5;
$y = 10;
function myTest()
{
  global $x, $y;
  $a = 100;
  $b = 50;
  $y = $x + $y;
  $b = $a + $b;
  echo $b;
  echo "<br/>";
}

mytest();
echo $y;
 ?>
