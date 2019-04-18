<?php
	$name = $_POST['user']; 
	$pwd = $_POST['pwd'];
		if ($_POST['on']) 
			{ 
			if ($name && $pwd) 
				{
				$content = $name."&".$pwd; 
			setCookie("UserDetails" , $content,time()+120); 
				} 
			}
		elseif ($_POST['Off']) 
			setCookie("UserDetails",''); 
?>

<html> 
<head><title>Access Control with Cookies</title></head> 
<body> 
<h1>Access Control with Cookies</h1> 
<?php 
	if ($_POST['__check__']) 
	{
		checkForm(); 
 	} else 
	{ 
		printForm() ; 
	} 

function checkForm()
{ global $name,$pwd; 

	if ($_POST['show'])
	{ 
	echo "<h3>Cookie contains ".$_COOKIE["UserDetails"] ."</h3>"; 
 	} else { 
		if (!$name || !$pwd) 
		echo "<h3>Please enter username and password</h3>"; 
		else 
		echo "<h3>You submitted $name and $pwd</h3>"; 
		} 
	printForm(); 
	}

	function printForm() {
		$thisURL=$_SERVER[PHP_SELF];
	
		echo <<<_DONE
	
		<form action="$thisURL" method="post"> 
			<table> 
			<tr> 
			<td>Enter Your Name</td> 
			<td><input type="text" length="20" name="user"></td> </tr> 
			<tr> 
			<td>Password</td> 
			<td><input type="password" length="10" name="pwd"></td> </tr> 
			<tr> 
			<td><input type="submit" name="on" value="Log On"/></td>
			<td><input type="submit" name="off" value="Log Off"/></td>  
			</tr>
			<tr> 
			<td colspan="2" align="center"> 
			<input type="submit" name="show" value="Show the Cookie" /> 
			</td> 
			</tr> 
			<input type="hidden" name="_check__" value="1" /> </table> 
			</form> 
		_DONE; 
	} 
?>
</body> 
</html>
