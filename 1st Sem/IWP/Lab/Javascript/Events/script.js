



var lastName = document.getElementById("l_name").value;
var email = document.getElementById("email").value;
var pass1 = document.getElementById("password").value;
var pass2 = document.getElementById("password_confirm").value;
var letters = /[A-Za-z]+$/;  

function validateFirstName(){
    var fnameTextbox = document.getElementById("f_name");

    if(fnameTextbox.value == ""){
        return;
    }

    var firstName = fnameTextbox.value;
    var firstNameError = document.getElementById("firstNameError");

    if (!(fnameTextbox.value.match(letters))){
        firstNameError.innerHTML = "Error: name cannot contain numbers or special characters";
        firstNameError.style = "color: red";
    }
    else{
        firstNameError.innerHTML = "";
    }
}

function validateLastName() {
    var lnameTextbox = document.getElementById("l_name");

    if (lnameTextbox.value == "") {
        return;
    }

    var lastName = lnameTextbox.value;
    var lastNameError = document.getElementById("lastNameError");

    if (!(lnameTextbox.value.match(letters))) {    
        lastNameError.innerHTML = "Error: name cannot contain numbers or special characters";
        lastNameError.style = "color: red";
    }
    else {
        lastNameError.innerHTML = "";
    }
}

function fillEmail(){
    var emailTextbox = document.getElementById("email");
    emailTextbox.value = "domain@provider.com" 
}

function validateEmail(){
    var emailError = document.getElementById("emailError");    
    var email = document.getElementById("email").value;
    var re = /^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
    
    if(re.test(email.toLowerCase())){
        emailError.innerHTML = "Error in email format";
        
    }
}