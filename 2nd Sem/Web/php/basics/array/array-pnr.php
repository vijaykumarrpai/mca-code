<!DOCTYPE html>
<html>
<body>

<?php
/*
    current() - returns the value of the current element in an array
    end() - moves the internal pointer to, and outputs, the last element in the array
    next() - moves the internal pointer to, and outputs, the next element in the array
    prev() - moves the internal pointer to, and outputs, the previous element in the array
    each() - returns the current element key and value, and moves the internal pointer forward
    reset() - The reset() function moves the internal pointer to the first element of the array.
*/
$people = array("Sangram", "Prashanth", "Rajakumar", "Suma");
print_r(each($people)) ;
echo "<br>";
echo "Reset: " .reset($people). "<br>";
echo "Current: " .current($people) . "<br>";
echo  "Next: " .next($people) . "<br>";
echo  "Prev: " .prev($people) . "<br>";
echo "End: " .end($people). "<br>";
?>

</body>
</html>