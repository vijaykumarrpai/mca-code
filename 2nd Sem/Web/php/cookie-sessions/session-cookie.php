<?php

//Write a PHP program to store page views count in a SESSION, to increment the
//count on each refresh, and to show the count on web page.
	//session_register("count"); 
	session_start(); 
	if (!isset($_SESSION['count']))   /* If there is already a value set */
	{ 
	$_SESSION['count'] = 1;   /* If there is no value set,  Set to 1  */
  echo "<p>Counter initialized</p>\n";}  
	else { $_SESSION['count']++;  /* Increment by 1 */
         } 

	print "<h1><b>The counter is now : $_SESSION[count]</b></h1>"; 
	print "<br>";
	print "<h3>Reload this page to Increment</h3>"; 


$cookiedate = 0;
if(isset($_COOKIE['Datee']))
{
$cookiedate = $_COOKIE['Datee'];
}
date_default_timezone_set("Asia/Calcutta");
$datestring1=mktime(date('h'),date('i'),date('s'));
$datestring = date('D M d, h:i:s ',$datestring1);
setcookie("Datee",$datestring);
$f = fopen('demo.txt','w+');
fwrite($f, $cookiedate);
fclose($f);
$filename="demo.txt";
$aray=file($filename);
$final=trim($aray[0]);
echo  "<h1>Session : Last Visited <br />".$final."<br /> </h1>";
?>
