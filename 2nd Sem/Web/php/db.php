    <?php
    if(!isset($_POST['send']))
    {
    ?>
    	<form method = "post" action = "<?php echo $_SERVER['PHP_SELF'];?>">
    	<table width = "40%" align = "center">
    		<tr>
    			<td>First name</td>
    			<td><input type = "text" name = "fname"/></td>
    		</tr>
    		<tr>
    			<td></td>
    			<td><input type = "submit" name = "send" value = "SEND"></td>
    		</tr>
    		</table>
    	</form>
    <?php
    }
    else
    {
    	$con = mysql_pconnect("localname", "usernam", "password") or die(mysql_error());
    	mysql_select_db("database",$con) or die(mysql_error());
    	
    	foreach($_POST as $key => $value)
    	{
    		if($key != "send") //Prevent the submit button's name and value from being inserted into the db
    		{
    			$query = "INSERT INTO tablename ($key) VALUES ('$value')";
    			mysql_query($query) or die(mysql_error());
    		}
    	}
    }
    ?>