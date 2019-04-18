function hasWhiteSpace(s) {
  	return s.indexOf(' ') >= 0;
}

function validateName(name){
	// console.log(name);

	if(!hasWhiteSpace(name.value.toString())){
		alert("Please enter full name!");
	}

	if(/\d/.test(name.value.toString())){
		alert("Not a valid name!");
	}
}
 
// function validateSRN(srn){

// }

function validateDOA(doa){
	var date = new Date();
	var todaysDate = date.getDate();
	// console.log(date.getDate());
	console.log(doa.value.toString().slice(7, 9));
	if(doa.value.toString().slice(8, 10) > todaysDate.toString()){
		alert("Invalid Date");
	}
}

function validateEmail(email){
	if(!(/^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/.test(email.value))){
		alert("Invalid Email");
	}
}

function luhnCheck(val) {
    var sum = 0;
    for (var i = 0; i < val.length; i++) {
        var intVal = parseInt(val.substr(i, 1));
        if (i % 2 == 0) {
            intVal *= 2;
            if (intVal > 9) {
                intVal = 1 + (intVal % 10);
            }
        }
        sum += intVal;
    }
    return (sum % 10) == 0;
}

function validateCardNumber(number) {
    var regex = new RegExp("^[0-9]{16}$");
    if (!regex.test(number))
        return false;

    return luhnCheck(number);
}

function validatePhone(phone) {
	if(!(phone.value.match(/^\d{10}$/))){
		alert("Invalid Phone Number!");
	}
}

function validateAll(){

	var name = document.getElementById('name');
	validateName(name);

	var srn = document.getElementById('srn');
	// validateSRN(srn);

	var doa = document.getElementById('doa');
	validateDOA(doa);

	var email = document.getElementById('email');
	validateEmail(email);

	var phone = document.getElementById('phone');
	validatePhone(phone);

	var password = document.getElementById('password');
 	var confirmPassword = document.getElementById('confirm_password');
	validatePasswords(password, confirmPassword);

	var dob = document.getElementById('dob');
	validateDOB(dob);

	var cardType = document.getElementById('card_type');
	validateCardType(cardType);

	var amount = document.getElementById('amount');
	validateAmount(amount);

	var cardNumber = document.getElementById('card_number');
	validateCardNumber(cardNumber);
}
