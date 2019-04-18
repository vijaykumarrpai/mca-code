<?php
//connect to database
       $db = mysql_connect('127.0.0.1','username', 'pwd', 'database');
       if (!$db){ 
                  die("Unable to connect to database: ". 
                  mysql_connect_error());            
                  }  

        if ($_POST['save']) { 
                // save one record 
                $statement = "INSERT INTO user (forenarne, surnarne , email ,type) VALUES ($forename' , ' $surnarne' , '$email' , '$role') "; 
        
                if($result=mysql_query($db, $statement)) { 
                          echo "<h3 style='color:green'>One row added to the database</h3>";
                            }
                 else{
                      echo "<h3 style-'color: red'>there was problem saving data</h3>"; 
                      }

//The code to update and delete records is shown below. 

    // after one record 
      $statement = $db->query("UPDATE user SET forename='$forename', surname='$surname', type='$role,' WHERE email='$email '"); 
	
    // delete one record 
    $statement = $db->query("DELETE * FROM user WHERE email='$email'");
  } 
  elseif ($_POST['view']) { 
    // show one record 
      $statement = $db->query("SELECT * FROM user WHERE email='$email'"); 

    if (! DB::isError($db)) { 
    echo "<h3>Your query returned</h3>"; 
    
    while ($data = $statement->fetchRow()) 
    { 
    $f = $data->forename; 
    $s = $data->surname; 
    $e = $data->email; 
    $r = $data->type; 
    } 
} 
else 
    { 
    echo "<h3 style='color: red'>There was a problem finding the row.Please  check that you entered the correct email address</h3>"; 
    } 
    While ($data =mysqli_fetch_object($result)){}
   // mysqli_fetch_object(result);
   //mysqli_fetch_row(result);
   // mysqli_fetch_array(result,type);
?>