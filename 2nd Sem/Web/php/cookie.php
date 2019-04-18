<!DOCTYPE html>
<?php
//Syntax: setcookie(name, value, expire, path, domain, secure, httponly);
$cookie_name = "user";
$cookie_value = "Tamal Dey";
setcookie($cookie_name, $cookie_value, time() + (86400 * 30), "/"); // 86400 = 1 day
?>
<html>
<body>

<?php
//retrieve the value of the cookie "user" (using the global variable $_COOKIE). 
//We also use the isset() function to find out if the cookie is set
if(!isset($_COOKIE[$cookie_name])) {
    echo "Cookie named '" . $cookie_name . "' is not set!";
} else {
    echo "Cookie '" . $cookie_name . "' is set!<br>";
    echo "Value is: " . $_COOKIE[$cookie_name];
}
//To modify a cookie, just set (again) the cookie using the setcookie() function:
?>
</body>
</html> 