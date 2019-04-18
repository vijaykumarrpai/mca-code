# write a program to sum up all even numbers from 1 to 100 and all odd numbers from 1 to 1000
sum = 0
for val in range(0,100,2):
    sum += val
print ("The sum of even numbers is : ", sum)

odd = 0
for value in range(1,1000,2):
    odd += value
    print ("The sum of odd numbers is : ", odd)
