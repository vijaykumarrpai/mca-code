var median = document.getElementById('median');

var array = [234, 235, 21, 12, 1234, 213, 123, 43, 98];

var mid = Math.floor(array.length / 2);
console.log(mid);
var arrayMedian = array[mid];

median.innerHTML += "Array: " + array + "<br>";
median.innerHTML += "Array Sorted: " + array.sort(sortNumber) + "<br>";
median.innerHTML += "Array Median: " + arrayMedian + "<br>";

function sortNumber(a, b) {
    return a - b;
}


