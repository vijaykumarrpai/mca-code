<?php
$username="root";
$password="";
$database="test";

$id   =$_POST['id'];
$name =$_POST['name'];
$add1 =$_POST['add1'];
$add2 =$_POST['add2'];
$email=$_POST['email'];

$con=mysqli_connect("localhost",$username,$password);
mysql_select_db($database) or die("Unable to select database");

//if(isset($_POST["insertrecord"]))
if($_POST['Insert'] == "Insert") 
{
       $query="INSERT INTO student VALUES('$id','$name','$add1','$add2','$email')";
       mysql_query($query);
       $query1="SELECT * FROM student";
       $result=mysql_query($query1);

       $num=mysql_num_rows($result);

       echo"<b>Output</b>";
       print "<table border size=1>
	<tr>	<th>ID</th>
		<th>NAME</th>
		<th>ADD1</th>
		<th>ADD2</th>
		<th>Email</th>
	</tr>";
       $i=0;
     
  while($i<$num) {
           $id   =mysql_result($result,$i,"id");
           $name =mysql_result($result,$i,"name");
           $add1 =mysql_result($result,$i,"add1");
           $add2 =mysql_result($result,$i,"add2");
           $email=mysql_result($result,$i,"email");
           echo "<tr> <td>$id</td>
		<td>$name</td>
	<td>$add1</td>
		<td>$add2</td>
		<td>$email</td>
	</tr>";
           $i++;
       }

print "</table>";

}
mysqli_close($con);
echo "<a href=\"2.html\"> BACK </a>";
?>



