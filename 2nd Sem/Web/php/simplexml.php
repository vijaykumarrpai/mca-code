<html>
<head >
<title>Using simpleXML</title>
</head>
<body>
<?php
  $strDoc = <<<_DONE 
      <?xml version="1.0"?>
      <message>
        <sender>Chris bates</sender> 
        <recipient>Readers of Web Programing 3</recipient>
        <content>Hello, why not try using PHP 5!!</content> 
      </message>
  _DONE; 
$xml = simplexml_load_string($strDoc); 
echo var_dump($xml); 


//output
    object(SimpleXMLElement)#1 (3) {
      ["sender"] => string(11) "Chris bates"
      ["recipient"] => string(27) "Readers of Web Programing 3"
      ["content"] => string(32) "Hello, why not try using PHP 5!!"
      }
 ?>
</body>
</html> 

