var date = new Date();
var datex = document.getElementById("datex");
datex.innerHTML += date + "<br>";
datex.innerHTML += date.getTime() + "<br>";
datex.innerHTML += date.getDate() + "<br>";
datex.innerHTML += date.getMonth() + "<br>";
datex.innerHTML += date.getFullYear() + "<br>";

var clock = document.getElementById("clock");
startTime();

function startTime() {
    var today = new Date();
    var h = today.getHours();
    var m = today.getMinutes();
    var s = today.getSeconds();
    m = checkTime(m);
    s = checkTime(s);
    clock.innerHTML = h + ":" + m + ":" + s;
    var t = setTimeout(startTime, 500);
}

function checkTime(i) {
    if (i < 10) {
    	i = "0" + i
	}  
    return i;
}