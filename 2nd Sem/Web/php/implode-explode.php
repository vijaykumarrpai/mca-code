<!DOCTYPE html>
<html>
<body>

<?php
$arr = array('Hello','World!','Beautiful','Day!');
echo implode(" ",$arr);
?>
<?php
$arr = array('Hello','World!','Beautiful','Day!');
echo implode(" ",$arr)."<br>";
echo implode("+",$arr)."<br>";
echo implode("-",$arr)."<br>";
echo implode("X",$arr)."<br>";
?>
<?php
$str = "Hello world. It's a beautiful day.";
print_r (explode(" ",$str))."<br>";
//The print_r() function is used to print human-readable information about a variable
?>
</body>
</html>