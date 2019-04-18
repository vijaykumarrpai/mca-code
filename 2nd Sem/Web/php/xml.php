<?php
//Convert a well-formed XML string into a SimpleXMLElement object, then output keys and elements of the object
$note=<<<XML
<note>
<to>Students</to>
<from>Teacher</from>
<heading>Submission Date</heading>
<body>Remember the Deadline 07-04-15</body>
</note>
XML;
echo "<br/><b>simplexml_load_string()</b><br/>";
$xml=simplexml_load_string($note);
echo var_dump($xml); 
//print_r $xml
?>

<?php
//Take a node of a DOM object and make it into a SimpleXML node
$dom=new domDocument;
echo "<br/><br/><b>simplexml_import_dom()</b><br/>";
$dom->loadXML("<note><to>Students</to><from>Teacher</from></note>");
$x=simplexml_import_dom($dom);
echo $x->from;
?>

<?php
//Convert an XML file into a SimpleXMLElement object, then output keys and elements of the object:
$xml=simplexml_load_file("note.xml");
echo "<br/><br/><b>simplexml_load_file()</b><br/>";
print_r($xml);
?> 

<?php
$xml=simplexml_load_file("note.xml") or die("Error: Cannot create object");
////Convert an XML file into SimpleXMLElement object
echo "<br/><br/><b>simplexml_load_file Object Access</b><br/>";
echo $xml->to . "<br>";
echo $xml->from . "<br>";
echo $xml->heading . "<br>";
echo $xml->body;
?> 

<?php
$note=<<<XML
<note>
<to>Student</to>
<from>Teacher</from>
<heading>Reminder</heading>
<body>Extra Classes in This Weekend</body>
</note>
XML;

$xml=simplexml_load_string($note);
echo "<br/><br/><b>simplexml_load_string()</b><br/>";
//Find the children of the note node
foreach ($xml->children() as $child)
  {
  echo "Child node: " . $child . "<br>";
  }
?> 

<?php
$string = <<<XML
<a>
 <b>
  <c>text</c>
  <c>stuff</c>
 </b>
 <d>
  <c>code</c>
 </d>
</a>
XML;

$xml = new SimpleXMLElement($string);
//xpath() function runs an XPath query on the XML document
/* Search for <a><b><c> */
$result = $xml->xpath('/a/b/c');

while(list( , $node) = each($result)) {
echo "<br/><br/><b>xpath()</b><br/>";
    echo '/a/b/c: ',$node,"\n";
}

/* Relative paths also work... */
$result = $xml->xpath('b/c');

while(list( , $node) = each($result)) {
echo "<br/><br/><b>Relative paths : xpath()</b><br/>";
    echo 'b/c: ',$node,"\n";
}
?>
