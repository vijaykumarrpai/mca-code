<?php
define("MYCONSTANT","Welcome to scripting language",true);
echo MYCONSTANT;

$arr = array(10,"Dog",20,"cat");
define ('ANIMALS',array('dog','cat','bird'));
echo "<br/>".ANIMALS[0];
echo "<br/>".ANIMALS[1];
echo "<br/>".ANIMALS[2];
echo "<br/>".$arr[0];
