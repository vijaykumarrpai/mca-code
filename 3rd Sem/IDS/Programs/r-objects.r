a = 10
class(a)
a = as.integer(a)
class(a)
b = "red"
b = 'red'
b
d = TRUE
class(d)
d = T
class(d)
print(a)
print(d)
d = 0
class(d)
d = as.logical(d)
d
a = c(1,2,3,4,5)
class(a)
b = c('vijay', 'kumar')
class(b)
print(a)
print(b)
a
b
c
d
a[0]
print(a[0])
a[1]
a[1:3]
a[3:5]
a[-3]
a[6]
length(a)
a[2,4]
a[-1,-3,5]
a[-1,-3,-5]
a[2::4]
a[c(2,4)]
a[2] = 10
a
a[6] = 6
a
a = 12
a
a = c(1,2,3,4,5,6)
a
a = c(a,13,12,15)
a
a = c(a[1:2],11,12,a[3:6])
a
[print(a[1])]
print(a[1])
print(a[1:2])
prin(a[1:2],[-7,-8])
print(a[1:2],[-7:-8])
print(a[-7:-8])
print(c(a[1:2],a[8:9]))
a
a[9] = 15
a
sort(a)
a
d = sort(a)
d
a = sort(a,decreasing = TRUE)
a
a = 1:100
a
a = seq(1,100,by = 2)
a
a = seq(1,100, by = 3)
a
a = seq(2,100, by = 2)
a
a = c(1,3, seq(5:11, by = 2))
a = c(1,3, seq(5,11, by = 2))
a
a = rep(0,3)
a
a = c()
a
a = c(a,1)
a
a = c(1)
a
a = c(a,1)
a = c(2)
a = c(a,1)
a
a = c(a, 2:3)
a
a = c("red")
a = c("red", "white", "yellow")
a
class(a)
a[1]
a[4] = c("violet")
a
a = 1:10
b = 11:20
c = a + b
a* b
b = 1:5
a * b
a[2] * 4
a = 10
b = 2
a / b
b = 3
a / b
b = 2
a % b
a %% b
a // b
a %/% b
c = 3
a %/% b
a %/% c
a / c
a = red
a = "red"
b = "white"
c(a+b)
paste(a,b)
paste(c,d)
a = factor(c("M", "F", "M", "M", "M", "F"))
a
class(a)
b = factor(c("vijay", "vijay"))
b
a
table(a)
table(b)
a = c("E", "W", "N", "S", "E", "W")
a
class(a)
a = as.factor(a)
a
table(a)
class(a)
savehistory("D:/Study/3rd Sem/IDS/Programs/r-objects.r")
a = matrix(1:10, nrow = 5)
a
a = matrix(1:10, ncol = 5)
a
a = matrix(0,3,3)
a
a[1,1]
a
a = matrix(1:10, 5)
a
a[1, ]
a[3, -1]
a[3, 1]
a[3, -2]
a
a*2
a * b
a*b
b = c(1,2,NA,5)
b
class(b)
a = 1:5
a
mean(a)
median(a)
mode(a)
b = NA.omit(b)
b = na.omit(b)
b
mean(b)
a * b
sqrt(16)
sqrt(16)
sqrt(729)
b = 1947.0
b = as.character(b)
class(b)
d = c(1:6)
class(d)
e = c(1, 'a', 2, 'b')
class(e)
f = c(a:z)
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
rep(1,11)
a = sort(rep('a',2))
a
a = sort(rep('a',2), (1,1))
a = sort(rep('a',2)(1,1))
a = sort(rep('a',2,1:8))
a = c(1,2,NA,4)
a
a = na.omit(a)
a
rep('a',2,seq(1:5),seq(7,11))
a = c(rep("a", 2),1:5,seq(7,11,by = 2))
a
a = Letters[1:26]
a
a
z
z = LETTERS[1:26]
LETTERS[1:26]
a = sort(rep('a',2)(1,1))
LETTERS[1:26]
a = 1:10000
a
b = sample(a,100)
b
y = sample(y,100)
y = 1:10000
y = sample(y,100)
y
b = sample(a,100, replace = TRUE)
b
c = sample(a,7)
c
mean(b)
mean(c)
summary(b)
summary(c)
savehistory("D:/Study/3rd Sem/IDS/Programs/r-objects.r")
