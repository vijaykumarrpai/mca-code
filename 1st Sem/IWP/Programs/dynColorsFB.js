// dynColors.js
//   Illustrates dynamic foreground and background colors

// The event handler function to dynamically set the
//  color of background or foreground

function setColor(where, newColor) {
  if (where == "background")
    document.body.style.backgroundColor = newColor;
  else
    document.body.style.color = newColor;
}

function buttonColor(color) {
    var b_dom = document.form1.ground;
    var where;
   
    if (document.form1.ground[0].checked == true) {
        where = document.form1.ground[0].value;
    } else if (document.form1.ground[1].checked == true) {
        where = document.form1.ground[1].value
    } else {
        alert("Please select foreground or background\n");
        return false;
    }
    setColor(where, color);
    return true;
}

