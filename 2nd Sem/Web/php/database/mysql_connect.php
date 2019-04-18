 <?php
/*
$servername = "localhost";
$username = "root";
$password = "";

// Create connection (MySQLi Object-Oriented)
$conn = new mysqli($servername, $username, $password);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}
echo "Connected successfully by OO Procedure</br>";
$conn->close();
*/
?> 

 <?php

$servername = "localhost";
$username = "root";
$password = "";

// Create connection (MySQLi Procedural)
$conn = mysqli_connect($servername, $username, $password);

// Check connection
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}
echo "Connected successfully by Procedural API </br>";
mysqli_close($conn); 

?> 

<?php
/*
$servername = "localhost";
$username = "root";
$password = "";

try {
    $conn = new PDO("mysql:host=$servername;dbname=myDB", $username, $password);
    // set the PDO error mode to exception
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
    echo "Connected successfully by PDO";
    }
catch(PDOException $e)
    {
    echo "Connection failed: " . $e->getMessage();
    }
 $conn = null; 
 */
?> 
