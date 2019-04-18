var questions = [];
questions.push("What is your name?");
questions.push("What is your best friend's name?");
questions.push("What is your father's name?");
questions.push("What is your mother's name?");
questions.push("How old are you??");
questions.push("Where is your hometown?");
questions.push("What is your mother tongue?");
questions.push("What is your weight?");
questions.push("How far is your home from here?");

var randomItem;

for(i = 0; i < 5; i++){
	randomItem = questions[Math.floor(Math.random() * questions.length)];
	prompt(randomItem);
}