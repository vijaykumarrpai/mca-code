<?php
# printf() function outputs a formatted string.
$number = 9;
$str = "Beijing";
printf("There are %u million bicycles in %s.",$number,$str);
echo "<br/>";
?>

<?php
#The sprintf() function writes a formatted string to a variable.
//Replace the percent (%) sign by a variable passed as an argument:
$number = 9;
$str = "Beijing";
$txt = sprintf("There are %u million bicycles in %s.",$number,$str);
echo $txt;
echo "<br/>";
?>

<?php
#Parse a query string into variables:
parse_str("name=Peter&age=43");
echo $name."<br>";
echo $age;
echo "<br/>";
?>