<?php
/*Parameter	Description
hour 	Optional. Specifies the hour
minute 	Optional. Specifies the minute
second 	Optional. Specifies the second
month 	Optional. Specifies the numerical month
day 	Optional. Specifies the day
year 	Optional. Specifies the year.
is_dst 	Optional. Parameters always represent a GMT date so is_dst doesn't influence the result 
declaration of mktime
int mktime ( [int $hour ] [, int $minute ] [, int $second ] [, int $month ] [, int $day ] [, int $year ] [, int $is_dst ] )*/

// Prints: Mar 30, 2015 was on a Friday
echo "Mar 30, 2015 is ".date("l", mktime(0,0,0,3,30,2015));
echo "<br>";

echo date("M-d-Y",mktime(0,0,0,1,1,99)) . "<br>";

echo date("M-d-Y",mktime(0,0,0,1,1,00)) . "<br>";

echo date("M-d-Y",mktime(0,0,0,1,1,2001)) . "<br>";

echo date("M-d-Y",mktime(0,0,0,14,1,2001)) . "<br>";

$lastday = mktime(0, 0, 0, 3, 0, 2016);
echo strftime("Last day in Feb 2016 is: %d\n", $lastday);
echo "<br>";

$lastday = mktime(0, 0, 0, 4, -31, 2016);
echo strftime("Last day in Feb 2016 is: %d", $lastday );
?>