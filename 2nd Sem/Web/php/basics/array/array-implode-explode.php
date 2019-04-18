<!DOCTYPE html>
<html>
<body>

<?php
$arr = array('Welcome ','to','the','world','of','serverside','scripting');
echo implode(" ",$arr);
?>
<?php
echo "<br/>";
$str = "Welcome to the world of serverside scripting";
print_r (explode(" ",$str));
?>

</body>
</html>