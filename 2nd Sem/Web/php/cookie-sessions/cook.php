<?php
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
