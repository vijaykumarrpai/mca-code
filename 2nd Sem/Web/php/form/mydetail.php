<?php
         
         // define variables and set to empty values
         $name = $email = $gender = $comment = $time = "";
         
         if ($_SERVER["REQUEST_METHOD"] == "POST") {
            $name = $_POST["name"];
            $email = $_POST["email"];
            $time = $_POST["time"];
            $comment = $_POST["comment"];
            $gender = $_POST["gender"];
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