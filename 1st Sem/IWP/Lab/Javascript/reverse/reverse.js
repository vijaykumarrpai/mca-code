var reverse = document.getElementById("reverse");

reverse.innerHTML = reverse.innerHTML + "Before Reverse: ";

function reverseNum(num){
	num = num + "";
	return num.split("").reverse().join("");
}

reverse.innerHTML = reverse.innerHTML + "After Reverse: " + "<br>";

for(var i = 100; i <= 200; i++){
	reverse.innerHTML = reverse.innerHTML + i + "  |  ";
	reverse.innerHTML = reverse.innerHTML + reverseNum(i) + "<br>";
	// console.log(reverseNum(i));
}

