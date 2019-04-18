<?php
session_start(); 
	if (!IsSet($_SESSION['count']))   /* If there is already a value set */
	
	$_SESSION['count'] = 1;   /* If there is no value set,  Set to 1  */
	$count=$_SESSION["count"];
  print ("<p>You have now visited $count page(s) <br/></p>\n");
  $_SESSION['count']++;  /* Increment by 1 */
?>