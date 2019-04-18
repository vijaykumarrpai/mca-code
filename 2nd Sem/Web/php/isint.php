    <?php  
    $var_name1=678;  
    
    if (is_int($var_name1))  
    {  
    echo "$var_name1 is Integer<br>" ;  
    }  
    else  
    {  
    echo "$var_name1 is not an Integer<br>" ;  
    }  
    
    $var_name2="a678"; 
    if (is_int($var_name2))  
    {  
    echo "$var_name2 is Integer<br>" ;  
    }  
    else  
    {  
    echo "$var_name2 is not Integer<br>" ;  
    }  
    /*The var_dump() function is used to display structured 
    information (type and value) about one or more variables.*/
    
    $var_name3="678"; 
    $result=is_int($var_name3);  
    echo "[ $var_name3 is Integer? ]" .var_dump($result)."<br>"; 
    
    $var_name4=999;  
    $result=is_int($var_name4);  
    echo "[ $var_name4 is Integer? ]" .var_dump($result)."<br>"; 
    
    $var_name5=698.99;   
    $result=is_int($var_name5);  
    echo "[ $var_name5 is Integer? ]" .var_dump($result)."<br>";  
    
    $var_name6=array("a1","a2");  
    $result=is_int($var_name6);  
    echo "[ $var_name6 is Integer? ]" .var_dump($result)."<br>";  
    
    $var_name7=+125689.66;
    $result=is_int($var_name7);  
    echo "[ $var_name7 is Integer? ]" .var_dump($result)."<br>";  
    
    ?>  