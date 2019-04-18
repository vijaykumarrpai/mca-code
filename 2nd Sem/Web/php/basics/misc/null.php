<!DOCTYPE html>
<html>
<body>

<?php
$x = "Hello world!";
$x = null;
var_dump($x);
?>

<?php
class Person {
  var $name = "Darshan";
  function name ($newname = NULL) {
    if (! is_null($newname)) {
      $this->name = $newname;
    }    return $this->name;

  }
  }

?>
</body>
</html>