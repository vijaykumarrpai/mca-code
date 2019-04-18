<?php
session_start();
/*Notice that session variables are not passed individually 
to each new page, instead they are retrieved from the session
we open at the beginning of each page (session_start()).*/
?>
<!DOCTYPE html>
<html>
<body>

<?php
// Echo session variables that were set on previous page
echo "User ID " . $_SESSION["user_id"] . ".<br>";
echo "User Name " . $_SESSION["uname"] . ".<br>";
echo "Status " . $_SESSION["user_status"] . ".";
?>

</body>
</html> 