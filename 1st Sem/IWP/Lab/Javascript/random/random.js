var random = document.getElementById("random");

for(i = 0; i <= 100; i++){
	random.innerHTML = random.innerHTML + Math.floor((Math.random() * 100) + 1) + "<br>";
}