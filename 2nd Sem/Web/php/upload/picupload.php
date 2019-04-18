<!doctype html>
<html>
<head>
<meta charset="utf-8">
<title>Untitled Document</title>
<script>
function ValidateFileUpload() {
    var fuData = document.getElementById('fileChooser');
    var FileUploadPath = fuData.value;


    if (FileUploadPath == '') {
        alert("Please upload an image");

    } else {
        var Extension = FileUploadPath.substring(
                FileUploadPath.lastIndexOf('.') + 1).toLowerCase();



 if (Extension == "gif" || Extension == "png" || Extension == "bmp"
                || Extension == "jpeg" || Extension == "jpg") {


            if (fuData.files && fuData.files[0]) {
                var reader = new FileReader();

                reader.onload = function(e) {
                    $('#blah').attr('src', e.target.result);
                }

                reader.readAsDataURL(fuData.files[0]);
            }

        } 


  else {
            alert("Photo only allows file types of GIF, PNG, JPG, JPEG and BMP. ");
			return false;

        }
    }
}
</script>
</head>

<body>
<form action="picupload1.php" method="post" enctype="multipart/form-data">
<input type="file" name="upload[]"  id="upload" multiple style="height:28px; width:175px;" onchange="return ValidateFileUpload()">
<input type="submit">
</form>
</body>
</html>
