<!DOCTYPE html>
<html>
<body>

<?php
// Prints the day
echo date("l") . "<br>";

// Prints the day, date, month, year, time, AM or PM
echo date("l jS \of F Y h:i:s A") . "<br>";

// Prints April 23, 2014 was on a Friday
echo "October 14,2016 was on a ".date("l", mktime(0,0,0,14,10,2016)) . "<br>";

// Use a constant in the format parameter
echo date(DATE_RFC822) . "<br>";
//A Request for Comments (RFC) is a formal document from the Internet Engineering Task Force ( IETF ) 
// prints something like: 23,4,2014T00:00:00+00:00
echo date(DATE_ATOM,mktime(0,0,0,23,4,2013));
?>

</body>
</html>