var num = 200.123;
var num1 = "2";
var num2 = "5.33";


math = document.getElementById("math");
math.innerHTML = math.innerHTML + " Round: " + Math.round(num) + "<br>";
math.innerHTML = math.innerHTML + " Floor: " + Math.floor(num) + "<br>";
math.innerHTML = math.innerHTML + " Ceil: " + Math.ceil(num) + "<br>";
math.innerHTML = math.innerHTML + " Sin: " + Math.sin(num) + "<br>";
math.innerHTML = math.innerHTML + " Cos: " + Math.cos(num) + "<br>";
math.innerHTML = math.innerHTML + " ParseFloat: " + parseFloat(num1) + "<br>";
math.innerHTML = math.innerHTML + " ParseInt: " + parseInt(num2) + "<br>";
math.innerHTML = math.innerHTML + " StringTo: " + num.toString() + "<br>";
math.innerHTML = math.innerHTML + " isNan(): " + isNaN(String) + "<br>";
math.innerHTML = math.innerHTML + " Type Conversion int to float: " + num + "<br>";
math.innerHTML = math.innerHTML + " Type Conversion float to int: " + num.toString() + "<br>";
