function median(values) {

    values.sort( function(a,b) {return a - b;} );

    var half = Math.floor(values.length / 2);

    if(values.length % 2)
        return values[half];
    else
        return (values[half - 1] + values[half]) / 2.0;
}

var array = [3, 8, 9, 1, 5, 7, 9, 21];
document.write(array + "<br>");
document.write(median(array));