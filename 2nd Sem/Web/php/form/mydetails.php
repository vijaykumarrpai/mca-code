<?php
         
         // define variables and set to empty values
         $name = $email = $gender = $comment = $time = "";
         
         if ($_SERVER["REQUEST_METHOD"] == "POST") {
            $name = test_input($_POST["name"]);
            $email = test_input($_POST["email"]);
            $time = test_input($_POST["time"]);
            $comment = test_input($_POST["comment"]);
            $gender = test_input($_POST["gender"]);
         }
        
         function test_input($data) {
            $data = trim($data);
            $data = stripslashes($data); 
            //This PHP function returns a string with the backslashes (\) removed that were added by the PHP addslashes() function.
              $data = htmlspecialchars($data);
  return $data;
}
             
       
?>
<?php
         echo "<h2>Your Given details are as :</h2>";
         
         echo "<b>Name : </b>".$name;
         echo "<br>";
         
         echo "<b>Email :</b>".$email;
         echo "<br>";
         
         echo "<b>Available Time :</b>".$time;
         echo "<br>";
         
         echo "<b>My classes: </b>".$comment;
         echo "<br>";
         
         echo "<b><i>Gender :</i></b>".$gender;
?>