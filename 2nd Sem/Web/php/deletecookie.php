<?php
// set the expiration date to one hour ago
setrawcookie("user", "", time() - 3);
?>
<html>
<body>

<?php
echo "Cookie 'user' is deleted.";
?>

</body>
</html> 