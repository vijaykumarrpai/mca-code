<?php
$username="root";
$password="";
$database="test";

mysqli_connect("localhost",$username,$password);
mysqli_select_db($database) or die("Unable to select database");


//if(isset($_POST['Search']))

if($_POST['Search'] == "Search") 
{
      $name  = $_POST['name'];
      $query = "select * from student where name ='$name'";
      $result = mysqli_query($query);
      print "<table border size=1>
	<tr>
		<th>id</th>
		<th>name</th> 
      		<th>add1</th>
		<th>add2</th>
		<th>email</th>
	</tr>";

	while($row = mysqli_fetch_array($result)) {

          $id    = $row[0];
          $name  = $row[1];
          $add1  = $row[2];
          $add2  = $row[3];
          $email = $row[4];
  
          echo  "<tr>  <td>$id</td>
		<td>$name</td>
		<td>$add1</td> 
         	<td>$add2</td>	
		<td>$email</td>
	</tr>";
       }
      echo "</table>";
}

echo "<a href=\"2.html\"> BACK </a>";
?>



