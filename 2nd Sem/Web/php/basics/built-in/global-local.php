<!DOCTYPE html>
<html>
<body>

<?php
$x = 5; // global scope
//You can have local variables with the same name in different functions, because local variables are only recognized by the function in which they are declared.
function myTest() {
    // using x inside this function will generate an error
    $x = 10; // local scope
    echo "<p>Variable x inside function is: $x</p>";
}
myTest();
// using x outside the function will generate an error
echo "<p>Variable x outside function is: $x</p>";
?>

</body>
</html>