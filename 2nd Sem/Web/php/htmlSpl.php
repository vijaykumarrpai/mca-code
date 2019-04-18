<!DOCTYPE html>
<html>
<body>

<?php
$str = "This is some <b>bold</b> text.";
echo htmlspecialchars($str);
//PHP htmlspecialchars() Function
//Convert the predefined characters "<" (less than) and ">" (greater than)  HTML entities:
?>
 
<p>Converting &lt; and &gt; into entities are often used to prevent browsers from using it as an HTML element. This can be especially useful to prevent code from running when users have access to display input on your homepage.</p>

</body>
</html>
