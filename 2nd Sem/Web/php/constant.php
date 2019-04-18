<?php
class MyClass
{
    const CONSTANT = 'constant value is 25';

    function showConstant() {
        echo  self::CONSTANT . "\n";
    }
}

echo MyClass::CONSTANT . "\n";

$classname = "MyClass";
echo $classname::CONSTANT . "\n"; // As of PHP 5.3.0
echo "<br/>";
$class = new MyClass();
$class->showConstant();
//The object operator, ->, is used in object scope to access methods and properties of an object. It’s meaning is to say that what is on the right of the operator is a member of the object instantiated into the variable on the left side of the operator. 
echo $class::CONSTANT."\n"; // As of PHP 5.3.0
echo "<br/>";
// The Scope Resolution Operator ::  the double colon, is a token that allows access to static, constant, and overridden properties or methods of a class.
//When referencing these items from outside the class definition, use the name of the class. 

//The double arrow operator, =>, is used as an access mechanism for arrays. This means that what is on the left side of it will have a corresponding value of what is on the right side of it in array context. This can be used to set values of any acceptable type into a corresponding index of an array. The index can be associative (string based) or numeric.

$myArray = array(
    0 => 'Big',
    1 => 'Small',
    2 => 'Up',
    3 => 'Down'
);
echo  $myArray[2];
echo "<br/>";
?>
