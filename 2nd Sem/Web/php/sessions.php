<?php
session_start();
$name = $_POST['user'];
$pwd = $_POST['pwd']; 

if ($_POST['on']) { 
	if ($name && $pwd){ 
		$_SESSION['user'] = $name; 
		$_SESSION['pwd'] = $pwd;
		$_SESSION['counter'] += 1; 
	} 

} elseif ($_POST['off'])
 { 
	unset($_SESSION['user']); 
	unset($_SESSION['pwd']);
	unset($_SESSION['counter']); 
 } 
?> 


<html> 
<head><title>Access Control with Sessions</title></head> 
<body>
	<h1>Access Control with Sessions</h1> 

<?php 
if($_POST['__check__'])
{ 
checkForm();
} else{
printFrom();
}
function checkForm()
{
global $name,$pwd;
if ($_POST['show']) {
	echo "<h3> Session contains ".$_SESSION['user']." and ".$_SESSION['pwd'] ."</h3>";
	echo "<h3> You have logged on ". $_SESSION['counter']." times</h3>";
	} else {
	if(!$name || !$pwd)
		echo "<h3>Please enter username and password</h3>"; 
	else
		echo "<h3> You submitted $name and $pwd</h3>"; 
} 
printForm(); 
} // checkForm 

function printForm() { 
$thisURL = $_SERVER[PHP_SELF]; 

echo <<<_DONE 
<form action="$thisURL" method="post"> 
<table> 
<tr> 
<td>Enter Your Name</td> 
<td><input type="text" length="20" name="user"></td> 
</tr> 
<tr> <td>Password</td> 
<td><input type="password" length="10" name="pwd"></td> </tr> 
<tr> 
<td><input type="submit" name="on" value="Log On"/></td> 
<td><input type="submit" name="off" value="Log Off"/></td> 
</tr> 
<tr> 
<td colspan="2" align-"center"> 
<input type-"submit" name-"show" value-"Show the Session" />
</td> 
</tr>
<input type="hidden" name="__check__" value="1" />
</table>
</form>
_DONE;
}
?>
</body>
</html>
