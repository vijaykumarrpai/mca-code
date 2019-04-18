sqrt(729)
b = 1947.0
b = as.character(b)
d = c(1:6)
class(d)
e = c(1, 'a', 2, 'b')
class(e)
f = c(1:26)
f = as.character(f)
class(f)
length(f)
f[1] = "a"
f
names = c('Ayush', 'Vijay', 'Sudhanva', 'Karthik', 'Shreedhar')
names
class(names)
length(names)
names[1:2]
names[2:3]
sort(names)
sort(names, decreasing = TRUE)
a = c(1,2,NA,4)
a = na.omit(a)
z = c(rep("a", 2),1:5,seq(7,11,by = 2)) #here type convertion takes place automatically
z
class(z)
LETTERS[1:26]
a = 1:10000
b = sample(a,100)
b
b = sample(a,100, replace = TRUE) #When population is small, use replace so that you get different values
b
