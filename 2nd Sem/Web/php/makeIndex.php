<?php 
$url = urldecode($_GET['url']); 
//http://localhost/rss.php?url=http://rss.enn.eom/rss/enn_world.rss Read through the code then I will explain the key parts. 

<html> <head> 
<title>rss.xml</title> </head> 
<body> 
<hl>Using RSS Feeds</hl> 
<p>The news at 

<?php 
echo date("h:ia")."on ".date("l jS F, Y") ."</p>"; 
makeIndex(); 
?> 

</body> 
</html> 

<?php 
function makeIndex() { 
global $url; 
if($url)
parseData();
else
returnError("<span style='color:red'>No resource URL supplied</span>");

}//makeIndex

funtion parseData()
{
global $url; 
$xml=simplexml_load_file($url); 
if($xml) 
{
echo"<h2>channel:<a href='".$xml->channel[0]->link."'>"
$xml->channel[0]->title."</a></h2>\n"
echo "<ul>";
foreach($xml->channel[0]->item as $item)
{
echo "<li><i><a href='".$item->link."'>".$item->description."</li>"\n;
}
echo "</ul>";
}
else
returnError(<span style='color:red'>Unable to load $url </span>");
}

function returnError($msg)
{
echo "<h2>Due to fatal error ".msg."we are unable to process your request </h2>";
}
?>