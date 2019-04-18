//dynvalue.js
var helpers =["Your name must be in the form: \n \
first name,middle initial., last name",
"Your email address must have the form: \
user@domain",
"Your user ID must have at least six characters",
"Your password must have atleast six \ 
characters and it must include one digit",
"This box provides advice on filling out\
the form on this page. Put the mouse cursor over any \
input field to get advice"]


function messages(adviceNumber){
document.getElementById("adviceBox").value = 								helpers[adviceNumber];
}
