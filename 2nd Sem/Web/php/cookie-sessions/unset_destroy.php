<?php
/*
$xyz='PESIT is now PES University';
echo 'Before using unset() the value of $xyz is : '. $xyz.'<br/>';
unset($xyz);
echo 'After using unset() the value of $xyZ is : '. $xyz;
*/
?>
<?php
session_start();
?>
<!DOCTYPE html>
<html>
<body>

<?php
// remove all session variables
$_SESSION["user_id"] = "WF114503";
$_SESSION["uname"] = "Tamal";
session_unset();
echo "User ID " . $_SESSION["user_id"] . ".<br>";
echo "User Name " . $_SESSION["uname"] . ".<br>";

// destroy the session
session_destroy();
echo "User ID " . $_SESSION["user_id"] . ".<br>";
echo "User Name " . $_SESSION["uname"] . ".<br>";
echo "All session variables are now removed, and the session is destroyed."
?>
