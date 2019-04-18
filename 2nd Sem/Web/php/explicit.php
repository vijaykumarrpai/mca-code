<?php
$a=14.07;
$b='007 Bond';

$c = (int)($a / $b);
echo $c;
echo "<br />";

$a=14.07;
$b='007 Bond';

$c = intval($a / $b);
echo $c;
echo "<br />";
//(bool) (boolean) , intval, settype()
//(float) (double) (real), (string) , (array), (object)
?>

<?php
$a=14.07;
$b='007 Bond';

$c = ($a / $b);
//echo $c;
echo "<br />";
settype($c, "integer");
echo $c;
echo "<br />";
?>