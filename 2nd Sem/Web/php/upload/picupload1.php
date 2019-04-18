<?php
$mem=1;
$total = count($_FILES['upload']['name']);
$ax='php/upload/uploads/';

// Loop through each file
for($i=0; $i<$total; $i++) {
  //Get the temp file path
  $tmpFilePath = $_FILES['upload']['tmp_name'][$i];

  //Make sure we have a filepath
  if ($tmpFilePath != ""){
	   if (!file_exists($ax))
	   {
	    mkdir($ax,0755,true);
	   }
    //Setup our new file path
    $newFilePath ='./'.$ax.'/'.$_FILES['upload']['name'][$i];
	$a[$i]='./'.$ax.'/'.substr(md5(rand(0,9999)), 17, 25).".jpg";
    //Upload the file into the temp dir
    if(move_uploaded_file($tmpFilePath, $newFilePath)) {
	 rename($newFilePath,$a[$i]);
    }
  }
}
/* //Delete a specific file
$dir = "uploads/file_name";
$dirHandle = opendir($dir);
while ($file = readdir($dirHandle)) {

            if($file==$data) {
                unlink("$dir/$file");
            }
        }

        closedir($dirHandle);*/
$a="uploads";
$files = array_diff(scandir($a), array('.','..')); 
    foreach ($files as $file) { 
	echo ("<img src=".$a."/".$file."><br> ");
	//Delete all files in specific directory
//      (is_dir("$a/$file")) ? delTree("$a/$file") : unlink("$a/$file"); 
    } 

?>
