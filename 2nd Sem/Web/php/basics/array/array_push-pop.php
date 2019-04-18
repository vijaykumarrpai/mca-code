<!DOCTYPE html>
<html>
<body>

<?php
$a=array("red","green");
array_push($a,"blue","yellow");
print_r($a);
?>
<?php
echo "<br/>";
$a=array("red","green","blue");
array_pop($a);
print_r($a);
?> 
</body>
</html>