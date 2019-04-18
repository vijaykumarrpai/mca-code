<?php
require 'PHPMailer/PHPMailerAutoload.php';

$mail = new PHPMailer;

$mail->isSMTP();                                   // Set mailer to use SMTP
$mail->Host = 'smtp.gmail.com';                    // Specify main and backup SMTP servers
$mail->SMTPAuth = true;                            // Enable SMTP authentication
$mail->Username = 'deytamal@gmail.com';          // SMTP username
$mail->Password = 'Nai743165hati'; // SMTP password
$mail->SMTPSecure = 'tls';                         // Enable TLS encryption, `ssl` also accepted
$mail->Port = '587';                                 // TCP port to connect to

$mail->setFrom('deytamal@gmail.com', 'Tamal');
$mail->addReplyTo('tamal_dey@pes.edu', 'Tamal');
$mail->addAddress('tamal_dey@pes.edu');   // Add a recipient
//$mail->addCC('govindraj.mane@gmail.com');
//$mail->addBCC('bcc@example.com');

$mail->isHTML(true);  // Set email format to HTML

$bodyContent = '<h1>How to Send Email using PHP in Localhost by Tamal Dey</h1>';
$bodyContent .= '<p>This is the HTML email sent from localhost using PHP script by <b>Tamal Dey</b></p>';

$mail->Subject = 'Email from Localhost by Tamal';
$mail->Body    = $bodyContent;

if(!$mail->send()) {
    echo 'Message could not be sent.';
    echo 'Mailer Error: ' . $mail->ErrorInfo;
} else {
    echo 'Message has been sent';
}
?>
