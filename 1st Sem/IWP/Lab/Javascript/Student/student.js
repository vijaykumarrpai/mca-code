var studentList = [];

function addAtLast(){
	var textBox = document.getElementById('textBox');
	var students = document.getElementById('students');
	var studentName = textBox.value.toString();

	if(studentName == ""){
		return;
	}

	studentList.push(studentName);

	students.innerHTML = "";
	for(var i = 0; i < studentList.length; i++){
		students.innerHTML += studentList[i] + "<br>"; 
	}

}

function addAtFront(){
	var textBox = document.getElementById('textBox');
	var students = document.getElementById('students');
	var studentName = textBox.value.toString();

	if(studentName == ""){
		return;
	}

	studentList.unshift(studentName);

	students.innerHTML = "";
	for(var i = 0; i < studentList.length; i++){
		students.innerHTML += studentList[i] + "<br>"; 
	}

}

function addAtIndex(){
	var textBox = document.getElementById('textBox');
	var students = document.getElementById('students');

	if(textBox.value == ""){
		alert("Enter something!");
		return;
	}

	var studentName = textBox.value.toString();

	if(studentName == ""){
		return;
	}

	var studentIndex = parseInt(prompt("Enter postion where you want to insert: "));

	studentList.splice(studentIndex - 1, 0, studentName);
	students.innerHTML = "";
	for(var i = 0; i < studentList.length; i++){
		students.innerHTML += studentList[i] + "<br>"; 
	}

}

function addTwoArrays(){
	var studentList = ["Vijay", "Prateek"];
	var girlsList = ["Yogita", "Ann", "Anjali", "Payal"];
	var finalList = studentList.concat(girlsList);

	console.log(studentList.concat(girlsList));
}

function getPartOfArrays(){
	var fruits = ["Banana", "Orange", "Lemon", "Apple", "Mango"];

	var from = parseInt(prompt("Enter from index: "));
	var to = parseInt(prompt("Enter to index: "));

	console.log(fruits.slice(from, to));
}