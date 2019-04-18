<?php
/*Write a PHP program to store page views count in a SESSION, 
to increment the count on each refresh, and to show the count on web page.*/
//session_register("count"); ---deprecated 
	
    session_start(); 
        print "<h3>Reload this page to Increment</h3>";
	
    if (!IsSet($_SESSION['count']))   /* If there is already a value set */
        { 
            $_SESSION['count'] = 1;   /* If there is no value set,  Set to 1  */
            print "<p>Counter initialized</p>\n";}  
	
    else  $_SESSION['count']++;  /* Increment by 1 */
            print "<h1><b>The counter is now : $_SESSION[count]</b></h1>"; 
            print "<br />";

/*Write a PHP program to store current date-time in cookie and display 
the ‘Last visited on’ date-time on the web page upon reopening of the 
same page along with the SESSION and increment the count on each refresh.*/

     $cookiedate = 0;
        if(isset($_COOKIE['Datee']))
            {
            $cookiedate = $_COOKIE['Datee'];
            }
            $datestring1=mktime(date_default_timezone_set("Asia/Calcutta"));
            //$datestring1=mktime(date('h')+5,date('i')+30,date('s'));
            $datestring = date('D M d, H:i:s ',$datestring1);
                setcookie("Datee",$datestring);
                
                $f = fopen('demo.txt','w+');
                fwrite($f, $cookiedate);
                fclose($f);
                $filename="demo.txt";

                $aray=file($filename);
                $final=trim($aray[0]);
            echo  "<h1>Session : Last Visited on<br />".$final."<br /> </h1>";
?>
