<?php
# strlen() function returns the length of a string (number of characters).
echo strlen("Hello world!"); // outputs 12
echo "<br/>";
?>
 
 
 <?php
# strrev() function reverses a string:
echo strrev("Hello world!"); // outputs !dlrow olleH
echo "<br/>";
?>

<?php
# strpos() function searches for a specific text within a string.
echo strpos("Hello world!", "world"); // outputs 6
echo "<br/>";
?> 

<?php
# str_word_count() function counts the number of words in a string:
echo str_word_count("Hello world!"); // outputs 2
echo "<br/>";
?>

<?php
# str_replace() function replaces some characters with some other characters in a string.
echo str_replace("world", "Dolly", "Hello world!"); // outputs Hello Dolly!
echo "<br/>";
?> 

<?php
#Remove characters from the right end of a string:
$str = "Hello World! ";
echo $str . "ok";
echo trim($str,"");
echo "<br/>";
?>

<?php
# Join array elements with a string:
$arr = array('Hello','World!','Beautiful','Day!');
echo join(" ",$arr);
echo "<br/>";
?>

<?php
/*trim() function removes whitespace and other predefined characters 
from both sides of a string.("He" in "Hello" and "d!" in "World"):*/
$str = " Hello World! ";
echo $str . "<br>";
echo trim($str," Hed! ");
echo "<br/>";
?>

<?php
#Remove characters from the left side of a string:
$str = "Hello World!";
echo $str . "<br>";
echo ltrim($str,"Hello");
echo "<br/>";
?>

<?php
#Remove characters from the right side of a string:
$str = "Hello World!";
echo $str . "<br>";
echo rtrim($str,"World!");
echo "<br/>";
?>

<?php
#Compare two strings (case-sensitive):
echo strcmp("Hello world!","Hello world!");
echo "<br/>";
echo strcmp("Hello world!","Hello World!");
echo "<br/>";
?>

<?php
#substr() function returns a part of a string. Return "world" from the string:
echo substr("Hello world",6);
echo "<br/>";
?>

<?php
#strtr() function translates certain characters in a string.Replace the characters "ia" in the string with "eo":
echo strtr("Hikka Warkd","ika","elo");
echo "<br/>";
?>

<?php
#Convert all characters to lowercase: 
echo strtolower("Hello WORLD.");
echo "<br/>";
?>

<?php
#Convert all characters to uppercase:
echo strtoupper("Hello WORLD!");
echo "<br/>";
?>
