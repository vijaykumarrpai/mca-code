<?php
// Start the session
session_start();
?>
<!DOCTYPE html>
<html>
<body>

<?php
// Set session variables
$_SESSION["user_id"] = "WF114503";
$_SESSION["uname"] = "Tamal";
$_SESSION["user_status"] = "Active";

echo "Session variables are set.";
?>

</body>
</html> 