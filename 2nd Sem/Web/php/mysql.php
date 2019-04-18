<?php
//$con = mysql_connect("localhost","root","");
$con = mysqli_connect("localhost","root","");
if (!$con)
{
 die('Could not connect: ' . mysqli_error());
}
else
{
 echo "Congrats! connection established successfully";
}
//mysql_close($con);
mysqli_close($con);
?>