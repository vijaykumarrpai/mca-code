a = 10
b = 5
if(a > b)
{
  print("A is greater than B")
}else
  {   
  print("B is greater than A")    
  }

x = c(1,2,4,5,6)
for (i in x) {
  print(x[i])
}

x = 2.987
while(x <= 4.987)
{
  x = x + 0.987
  print(c(x,x-2,x-1))
}

a = -3
repeat 
{ 
  print(a) 
  a = a+1 
  if(a > 5) 
    break 
}

x = 1:4
for(i in x) 
{
  if(i == 2)
    {
    next
    }
    print(i)
}

x = 1:10
for(i in x)
{
  if(i == 2)
  {
    break
  }
  print(i)
}

x = 3.142
abs(5)
sqrt(x)
ceiling(x)
trunc(x)
round(x, digits = 2)
cos(x)
sin(x)
tan(x)
log(x)
log10(x)
exp(x)

x = "Vijayakumar"
substr(x, start = 1, stop = 5)
grep("a",x,ignore.case = FALSE, fixed = FALSE)
sub("akumar","pai",x,ignore.case = FALSE, fixed = FALSE)
strsplit(x, "")
y = "kumar"
paste("Vijay",y)
toupper(x)
tolower(x)

a = 1:10
mean(a)
mean(3424233.124241, trim = 0.1)
mean(a, na.rm = TRUE)
length(a)
a = na.omit(a)
na.rm(a)
sd(a)
median(a)
quantile(a) #very important
summary(a) # very important
quantile(a,c(0.1,0.2))
range(a)
sum(a)
min(a)
max(a)
marks = 0:99
scale(marks, center = TRUE, scale = TRUE)

words = c("R", "Data Science", "Machine Learning", "Algorithms", "AI")
words.names = function(x)
{
  for(name in x) 
  {
    print(name)
  }
}

words.names(words)

names = c("Vijay","Ayush","Sudhanva")
age = c(23,22,23)
salary = c(100000,200000,300000)
employees = data.frame(names = c("Vijay","Ayush","Sudhanva"), age = c(23, 22, 23), salary = c("100000","200000","300000"))
employees

findHighSalary = function(df)
{
  Maxsal = 0
  names = ""
  for(i in 1:nrow((employees)))
      {
        tmpsal = as.numeric(employees[1,3])
        if(tmpsal > Maxsal) 
        {
          Maxsal = tmpsal
          names = employees[i,1]
        }
  }
  return(as.character((names)))
}
findHighSalary(employees)
