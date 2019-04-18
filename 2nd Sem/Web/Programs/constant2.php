<?php
class MyClass
{
const CONSTANT = 'constant value is 25';
function showConstant()
{
  echo self :: CONSTANT . "\n";
}
}
echo MyClass :: CONSTANT . "\n";
$classname = MyClass;
echo $classname :: CONSTANT . "\n";
echo "<br/>";

$class = new MyClass();
$class -> showConstant();

echo $class :: CONSTANT."\n";
echo "<br/>";

?>
