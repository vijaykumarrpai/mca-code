 <?php

/***
 * sprintf() is used to "STORE" some formatted string,
 * and show it on browser with the help echo or print
 * */

/***
 * NOTE : sprintf() convert any string into it's formatted manner and save it into
 * any variable to use more than one place to print or echo
 ***/


 // Now formatted string is in $a var and we can use $a any where to print
  $a = sprintf("%d", "65000");
  print $a;                //INT 65
  echo '<br>';

  $b = sprintf("%c", "65");
  echo $b;                 // CHAR A
  echo '<br>';

  $c = sprintf("%f", "65");
  echo sprintf("%s","hello");
  echo $c;                  // FLOAT 65.000000
  echo '<br>';

  $d = sprintf("testing right now [%s] [%s]", "Hello Zend", "Hello PHP");
  echo $d;
  //testing right now [Hello Zend] [Hello PHP]
 ?>