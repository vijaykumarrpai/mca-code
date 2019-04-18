<?php
$xyz='PESIT is now PES University';
echo 'Before using unset() the value of $xyz is : '. $xyz.'<br/>';
unset($xyz);
echo 'After using unset() the value of $xyZ is : '. $xyz;
?> 
<?php  
/*Return value

TRUE if variable (variable1,variable2..) exists and has value not equal to NULL, FALSE otherwise.

Value Type : Boolean.. */

$var1 = 'test';  
var_dump(isset($var1));  
?> 