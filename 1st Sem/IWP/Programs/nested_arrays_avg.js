// nested_arrays.js
//   An example illustrate an array of arrays

// Create an array object with three arrays as its elements

      var nested_array = [[2, 4, 6],
                          [1, 3, 5],
                          [10, 20, 30]
                         ];

// Display the elements of nested_list

document.write("Matrix:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Row sum<br\>")
var total=0,count=0;
for (row = 0; row <nested_array.length; row++) 
{
	document.write("[&nbsp;");
        for (var col = 0; col <nested_array[row].length; col++)
	{
          document.write(nested_array[row][col], "&nbsp;");
	  total += nested_array[row][col];
	  count+=1;
	}
        document.write("&nbsp;]<br />");
}
document.write("<br\>Total:&nbsp;"+total);
total = total / count;
document.write("<br\>Average:&nbsp;"+total);
