<html>
<body>

<form method="post" action="<?php echo $_SERVER['PHP_SELF'];?>">
  Name: <input type="text" name="fname">
  Password: <input type="password" name="pass">
  <input type="submit">
</form>

<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // collect value of input field
    $name = $_POST['fname'];
    $pass = $_POST['pass'];
    if (empty($name)) {
        echo "Name is empty";
    } else {
        echo $name.$pass;
    }
}
?>

</body>
</html> 