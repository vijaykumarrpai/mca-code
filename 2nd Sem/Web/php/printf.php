<?php

/***
 * printf()  is used to "PRINT" some formatted string
 * sprintf() is used to "STORE" some formatted string, and print it with the help
 * of echo or print
 * */
$a="0065";

 printf("%2d", $a); //INT 65
  echo '<br>';
 printf("%2d", "-0065"); //INT -65
  echo '<br>';
  printf("%s", "-0065"); //INT 65
  echo '<br>';

  printf("%c", "65"); // CHAR A
   echo '<br>';

  printf("%2.3f", "00650.0"); // FLOAT 65.000
  echo '<br>';

  printf("testing right now [%s] [%s]", "Hello Zend", "Hello PHP");
  //testing right now [Hello Zend] [Hello PHP]
 
  ?>
