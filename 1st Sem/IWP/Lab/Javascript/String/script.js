var text = "Hello my name is Sudhanva. I am from pes university"
var string = document.getElementById("string");
string.innerHTML = string.innerHTML + text + "<br>";
string.innerHTML = string.innerHTML + text.replace("Sudhanva", "Shreedhar")

var x = 5;
var y = "5";
var z = 5;

var number = document.getElementById("number");
number.innerHTML = number.innerHTML + "Integer 5 == String 5: " + (5 == "5") + "<br>";
number.innerHTML = number.innerHTML + "Integer 5 == Integer 5: " + (5 == 5) + "<br>";
number.innerHTML = number.innerHTML + "Integer 5 === String 5: " + (5 === "5") + "<br>";
number.innerHTML = number.innerHTML + "Integer 5 === Integer 5: " + (5 === 5) + "<br>";
number.innerHTML = number.innerHTML + "Integer 0 == Boolean 0: " + (0 == false) + "<br>";
number.innerHTML = number.innerHTML + "Integer 0 === Boolean 0: " + (0 === false) + "<br>";
number.innerHTML = number.innerHTML + "Num 5 to String ==: " + (5 == x.toString()) + "<br>";
number.innerHTML = number.innerHTML + "Num 5 to String ===: " + (5 === x.toString()) + "<br>";
number.innerHTML = number.innerHTML + "Num 5 to String Binary: " + (x.toString(2)) + "<br>";
// number.innerHTML = number.innerHTML + "Num 5 to String ===: " + (x.toString(2)) + "<br>";
