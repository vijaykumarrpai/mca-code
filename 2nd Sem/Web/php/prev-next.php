<?php
$transport = array('foot', 'bike', 'car', 'plane');
$mode = current($transport); // $mode = 'foot';
echo $mode."<br/>";
$mode = next($transport);    // $mode = 'bike';
echo $mode."<br/>";
$mode = next($transport);    // $mode = 'car';
echo $mode."<br/>";
$mode = prev($transport);    // $mode = 'bike';
echo $mode."<br/>";
$mode = end($transport);     // $mode = 'plane';
echo $mode."<br/>";
$mode = reset($transport);     // $mode = 'foot';
echo $mode."<br/>";
$mode = array_push($transport,'truck','boat');     // $mode = 'foot';
echo $mode."<br/>";
echo $transport[4]."<br/>".$transport[5]."<br/>";
?>
