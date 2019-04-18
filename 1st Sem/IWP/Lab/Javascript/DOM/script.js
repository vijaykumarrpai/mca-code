var area = document.getElementById("area");
area.value = "This person's name is ......." + "\n" + "Email ID is .......";

function fillArea(){
    var area = document.getElementById("area");
    console.log(area.value);
    var name = document.getElementById("name").value.toString();
    var email = document.getElementById("email").value.toString();   
    area.value = "This person's name is " + name + "\n" + "Email ID is " + email;
}
    
