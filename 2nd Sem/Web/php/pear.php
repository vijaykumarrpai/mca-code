<?php
require 'DB.php'; 	I 
$db=DB::connect("mysqli://user:password@address/database/");

if (DB::isError($db)) { die ("unable to connect to database: ". $db->getMessage()):
}
//returned values are available as object
$db->setFetchMode(DB_FETCHMODE_OBJECT);
>
<?php
if ($_POST['save']) { 
// save one record 

$statement = $db->query("INSERT INTO user (forename,surname,email,type) VALUES 
('$forename' , '$surname' , '$email' , '$role')");
  
    if (! DB::isError($db)) { 
        echo "<h3 style='color: green'>One row added to the database/h3>"; 
        } else { 
        echo "<h3 style='color: red'>There was a problem saving your data</h3>" ;. 
        }  
?>
	
	