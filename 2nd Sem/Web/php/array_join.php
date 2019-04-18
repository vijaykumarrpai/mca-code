<?php
$a=array("A","Cat","Dog","A","Dog");
$b=array("A","A","Cat","A","Tiger");
$c=array_combine($a,$b);
print_r(array_count_values($c));
?>
