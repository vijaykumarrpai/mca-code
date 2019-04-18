<!doctype html>
<html>
<head>
<meta charset="utf-8">
<title>Get Function</title>
</head>
<body>
<h1 align="center">Click to see the details of the Student </h1>
<br><br>
<table width="471" border="1" align="center">
  <tr>
    <td><h3 align="center"><a href="getp.php?id=<?php echo 'slno';?>">slno</a></h3></td>
    <td><h3 align="center"><a href="getp.php?id=<?php echo 'name';?>">Name</a></h3></td>
    <td><h3 align="center">Click Here</h3></td>    
  </tr>
  
<?php
$db=new mysqli('127.0.0.1','root','','mydb');//127.0.0.1 or localhost both are correct
if($db->connect_errno != 0)
{
    die('we are down at the moment, try again later');
}

if(isset($_GET["id"]))
{

 $id=$_GET["id"];
 
$use=$db->query("SELECT * FROM stud ORDER BY  $id DESC ");
}
else
{
	$use=$db->query("SELECT * FROM stud");
}

while($row=$use->fetch_assoc())
{
?><tr>
    <td><h3 align="center">
      <?php  echo $row['slno']  ?>
    </h3></td>
    <td><h3 align="center">
      <?php  echo $row['name']  ?>
    </h3></td>
    <td><h3 align="center"><?php echo('<a href="show.php?axp=' . $row['slno'] . '">') ?>Show</a></h3></td>
  </tr>
<?php 
}
?>
</table>
<br><br>
<div style=" position:relative; bottom :0; height:auto; margin-top:auto; width:99%; text-align:center; font-family:Cambria, 'Hoefler Text', 'Liberation Serif', Times, 'Times New Roman', serif">
<H2 align="center" >Prepared By Prashant Mane (Trainer at HackerEarth)</H2>
</div>
</body>
</html>