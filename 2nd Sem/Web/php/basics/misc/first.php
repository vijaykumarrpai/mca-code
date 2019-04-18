<!DOCTYPE html>

<html>
<head>
<style>
   #styletext {
    color: red;
    font-size:25px;
}
</style>
</head>
<body>
<h1>My first PHP page</h1>
<?php
echo "Say hello to PHP<br />";
$color="Red";
echo "<div id=\"styletext\">My car Color:".$color.'</div><br/>';
echo '<div id="styletext">My car Color:'.$color.'</div><br/>';
//echo "Color: $Color";
$calc=5/* + 15 */+ 5;
echo '5 /* + 15 */ + 5 <br />';
echo $calc;
$x = 5;
$y = 10.5;
print "<br />$x and $y";
?>
</body>
</html>