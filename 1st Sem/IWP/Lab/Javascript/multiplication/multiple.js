multiple = document.getElementById("multiple");

for(var i = 1; i <= 10; i++){
	for(var j = 1; j <= 10; j++){
		multiple.innerHTML = multiple.innerHTML + i + " * " + j + " = " + i * j + "<br>"; 
	}

	multiple.innerHTML = multiple.innerHTML + "<br>"; 
}