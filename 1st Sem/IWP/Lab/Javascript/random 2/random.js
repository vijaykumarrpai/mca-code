var array = [];

for(i = 0; i < 1000; i++){
	array.push(i);
}

var randomItem = array[Math.floor(Math.random() * array.length)];
var num = randomItem % 2;

var random = document.getElementById("random");
random.innerHTML = randomItem;