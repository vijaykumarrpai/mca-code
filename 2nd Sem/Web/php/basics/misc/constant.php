<?php
define("GREETING", "Server side Programming<br/>");

function myTest() {
    echo GREETING;
}
 
myTest();
?> 
<?php
class MyClass
{
    const CONSTANT = 'PES MCA III Sem';

    function showConstant() {
        echo  self::CONSTANT . "<br/>";
    }
}
/*PHP has two Object Operator namely -> and ::

-> is used when you are trying to call a method on an Instance and / or access an Instance property.

:: is used when you want to call a static method or call a parent class's version of a method within a child class.
*/
echo MyClass::CONSTANT . "<br/>";

$classname = "MyClass";
echo $classname::CONSTANT . "<br/>"; // As of PHP 5.3.0

$class = new MyClass();
$class->showConstant();

echo $class::CONSTANT."<br/>"; // As of PHP 5.3.0
?>
