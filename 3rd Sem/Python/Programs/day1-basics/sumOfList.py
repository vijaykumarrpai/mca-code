# define a list of 10 numbers using for loop, print the sum of that particular list
x = list((1,2,3,4,5,6,7,8,9,10))
sum = 0
for val in x:
    sum += val
print ("Sum of " + str(len(x)) + " is", sum)

