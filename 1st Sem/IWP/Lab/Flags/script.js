/* ----------------- Indian Flag ------------------ */

var canvas = document.getElementById("ind");
var ctx = canvas.getContext('2d');

// Rect 
ctx.fillStyle = "#ff6d00";
ctx.fillRect(10, 10, 250, 50);
ctx.fillStyle = "#1b5e20";
ctx.fillRect(10, 100, 250, 50);

// Arc of chakra
ctx.beginPath();
ctx.fillStyle = "blue";
ctx.arc(135, 80, 18, 0, Math.PI * 2, true); 
ctx.stroke();

/* ----------------- Pakisthani Flag ------------------ */

var canvas = document.getElementById("pak");

// Rect flag
var ctx = canvas.getContext('2d');
ctx.fillStyle = "#1B5E20";
ctx.fillRect(10, 10, 250, 200);

// White Circle
ctx.beginPath();
ctx.fillStyle = "white";
ctx.arc(135, 80, 50, 0, Math.PI * 2, true); 
 
ctx.fill();

// Green Circle on top of white circle
var ctx2 = canvas.getContext('2d');
ctx2.beginPath();
ctx2.fillStyle = "#1B5E20";
ctx2.arc(150, 65, 50, 0, Math.PI * 2, true); 
 
ctx2.fill();

// Star


/* ----------------- Bangla Flag ------------------ */

var canvas = document.getElementById("bangla");

// Rect flag
var ctx = canvas.getContext('2d');
ctx.fillStyle = "#388E3C";
ctx.fillRect(10, 10, 250, 200);

// Red Circle
ctx.beginPath();
ctx.fillStyle = "#F44336";
ctx.arc(135, 80, 50, 0, Math.PI * 2, true); 
 
ctx.fill();
