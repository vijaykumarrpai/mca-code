<?php
$myfile = fopen("newfile.txt", "w") or die("Unable to open file!");
$txt = "MCA III Sem students are wonderfull\n";
fwrite($myfile, $txt);
$txt = "They are studying hard to achieve good result during placement\n Keep it up Guys!!!";
fwrite($myfile, $txt);
echo "Sucessfully written";
fclose($myfile);
?> 