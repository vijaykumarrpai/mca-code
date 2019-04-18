<?php
function printf_array($format, $arr)
{
    return call_user_func_array('printf', array_merge((array)$format, $arr));
}
?>

Use it the following way:
<?php
$goodevil = array('good', 'evil');
printf_array('There is a difference between %s and %s', $goodevil);
?> 