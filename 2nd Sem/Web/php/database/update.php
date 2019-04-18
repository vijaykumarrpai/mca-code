 <?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "myDB";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$sql = "UPDATE MyGuests SET lastname='Doe' WHERE id=9";

if ($conn->query($sql) === TRUE) {
    echo "Record updated successfully <br/>";
} else {
    echo "Error updating record: " . $conn->error;
}

$conn->close();
?> 
 <?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "myDB";

// Create connection
$conn = mysqli_connect($servername, $username, $password, $dbname);
// Check connection
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}

$sql = "UPDATE MyGuests SET lastname='Moe' WHERE id=6";

if (mysqli_query($conn, $sql)) {
    echo "Record updated successfully<br/>";
} else {
    echo "Error updating record: " . mysqli_error($conn);
}

mysqli_close($conn);
?> 