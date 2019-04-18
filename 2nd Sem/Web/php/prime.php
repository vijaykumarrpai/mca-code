<?php  
//Write a function to check a number is prime or not.
    function IsPrime($n)  
    {  
     for($x=2; $x<$n; $x++)  
       {  
          if($n %$x ==0)  
              {  
               return 0;  
              }  
        }  
      return 1;  
       }  
    $a = IsPrime(3);  
    if ($a==0)  
    echo 'This is not a Prime Number.....';  
    else  
    echo 'This is  a Prime Number..';  
    ?>   