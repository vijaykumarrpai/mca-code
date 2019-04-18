<?php
// hostname or ip of server (for local testing, localhost should work)
$dbServer='localhost';

// username and password to log onto db server
$dbUser='root';
$dbPass='';

// name of database
$dbName='test';

    $link = mysql_connect("$dbServer", "$dbUser", "$dbPass") or die("Could not connect");
    print "Connected successfully<br>";
    mysql_select_db("$dbName") or die("Could not select database");
    print "Database selected successfully<br>";

// close connection
mysql_close($link);
?>
