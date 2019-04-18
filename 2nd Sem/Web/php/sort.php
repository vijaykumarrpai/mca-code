<!DOCTYPE html>
<html>
<body>
<h4> Array sorted with sort </h4>
<?php
$person = array("Tejaswini", "Purnendu", "Karthik", "Smithi",06,4.65,true,false);
//Sort Array in Ascending Order - sort()
sort($person);
$clength = count($person);
for($x = 0; $x < $clength; $x++) {
    echo $person[$x];
    echo "<br>";
}
?>
<h4> Array sorted with rsort </h4>
<?php
$numbers = array(4, 6, 2, 22, 11);
rsort($numbers);
//Sort Array in Descending Order - rsort()
$arrlength = count($numbers);
for($x = 0; $x < $arrlength; $x++) {
    echo $numbers[$x];
    echo "<br>";
}
?>
<h4> Array sorted with asort </h4>
<?php
$age = array("Rakshit"=>"35", "Sampada"=>"27", "Tabrez"=>"43");
asort($age);

foreach($age as $x => $x_value) {
    echo "Key=" . $x . ", Value=" . $x_value;
    echo "<br>";
}
?>
<h4> Array sorted with arsort </h4>
<?php
$age = array("Rakshit"=>"35", "Sampada"=>"37", "Tabrez"=>"43");
arsort($age);
//Sort Array (Descending Order), According to Value - arsort()
foreach($age as $x => $x_value) {
    echo "Key=" . $x . ", Value=" . $x_value;
    echo "<br>";
}
?>
<h4> Array sorted with ksort </h4>
<?php
$age = array("Rakshit"=>"35", "Sampada"=>"37", "Tabrez"=>"43");
ksort($age);
//Sort Array (Ascending Order), According to Key - ksort()
foreach($age as $x => $x_value) {
    echo "Key=" . $x . ", Value=" . $x_value;
    echo "<br>";
}
?>
<h4> Array sorted with krsort </h4>
<?php
$age = array("Rakshit"=>"35", "Sampada"=>"37", "Tabrez"=>"43");
krsort($age);
//Sort Array (Descending Order), According to Key - krsort()
foreach($age as $x => $x_value) {
    echo "Key=" . $x . ", Value=" . $x_value;
    echo "<br>";
}
?>
</body>
</html>