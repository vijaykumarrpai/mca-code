<!doctype html>
<html>
<head>
<meta charset="utf-8">
<title>Get Function</title>
</head>
<body>
<h1 align="center">Click to see the details of the Student </h1>
<br><br>
<table width="1050" border="1" align="center">
  <tr>
    <td width="155"><h1 align="center">slno</h1></td>
    <td width="256"><h1 align="center">Name</h1></td>
    <td width="366"><h1 align="center">Email</h1></td>
    <td width="175"><h1 align="center">Phono</h1></td>
  </tr>
  
<?php
$db=new mysqli('127.0.0.1','root','','mydb');//127.0.0.1 or localhost both are correct
if($db->connect_errno != 0)
{
    die('we are down at the moment, try again later');
}
$agets= $_GET['axp'];
$use=$db->query("SELECT * FROM stud WHERE slno='$agets'");
$row=$use->fetch_array();
?>
<tr>
<td><h1 align="center">
  <?php  echo $row['slno']  ?>
</h1></td>
<td><h1 align="center">
  <?php  echo $row['name']  ?>
</h1></td>
<td><h1 align="center">
  <?php  echo $row['email']  ?>
</h1></td>
<td><h1 align="center">
  <?php  echo $row['phono']  ?>
</h1></td>
</tr>
</tr>
</table>
<br><br>
<div style=" position:absolute; bottom :0; height:auto; margin-top:auto; width:99%; text-align:center; font-family:Cambria, 'Hoefler Text', 'Liberation Serif', Times, 'Times New Roman', serif">
<H2 align="center" >Prepared By Prashant Mane (Trainer at HackerEarth)</H2>
</div>
</body>
</html>