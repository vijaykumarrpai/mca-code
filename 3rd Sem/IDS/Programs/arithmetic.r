a = 91:100
class(a)
is.vector(a)
a[1]
a[1:4]
a+1
a[1]-3
a/2
a%%2
a%/%2
a[a<95]
a[a==92]
a[a==101]
a=c("M","F","M")
a
a[a=="F"]
b=a[a=="F"]
b = a[a!="F"]
b
a = 1:10
b = 11:20
c = 1:10
a[a > 5 & a < 8]
a[a > 5 & a < 8]
a = 1:10
b = 1:5
a+b
x = a()
b = c(b,rep(0,5))
b
a+b
a = c()
a
class(a)
a = c(1,0,0,0,1,1,1,1)
class(a)
a = as.factor(a)
a
class(a)
# convert from any form to another with as.
levels(a)
table(a) #use table function to check whether they are equal or not
b = c("E","W","E","E","N","S","W")
b
class(b)
as.factor(b)
table(b)
a = matrix(1:6, 3)
a
a[1,1]
a
a[2,2]
a[,2] # this is used almost everywhere. very important
a[1,]
a = matrix(0,3,3)
a
b = matrix(rep(0,9),3,3)
b
b = rbind(b,1:3)
b
cbind(b, 7:9)
b[1,1] = 10
b
fix(b)
a * b
a
a = matrix(1:6,3)
a
a = cbind(a, 7:9)
a
a = matrix(1:6,4)
a
b
a = matrix(rep(1:16),4,4)
a
b
a*b
a%*%b
a = t(a)
a
fact(5)
factorial(5)
a = list("Teachers",3,c("Radha", "Krishna", "Rama"))
a
class(a)
b = LETTERS[1:3]
b
class(b)
b = LETTERS[3]
b
c = list(a,b)
c
d = c(a,b)
d
x = 10
x
c[[1]]
a[[3]][2:3]
library(readxl)
sample <- read_excel("C:/users/vijaykumar/desktop/sample.xlsx")
class(sample)
a
b
b = LETTERS[1:5]
c = data.frame(a,b)
c$a
c$b
str(c)
c$b = as.character(c$b)
str(c)
student = data.frame(srn = c(1,5,7),name = c("Radha", "Krishna", "Rama"))
student
student$srn
student$name
student$srn == 5
k = student[student$srn == 5,]
k = student[student$srn == 5, student$name == "Krishna"]
k
class(k)
table(k$srn)
k = student[1:2,]
k
emp.data <- data.frame(emp_id = c(1:5), emp_name = c("Ricky", "Danish", "Mini", "Ryan", "Gary"), salary = c(600,500,671,729,943))
emp.data
dim(student)
nrow(student)
result = data.frame(emp.data$emp_name)
result
emp.data[1:2,]
emp.data[c(3,5),c(2,4)]
emp.data
student$marks = c(90,60,50)
student
fix(student)