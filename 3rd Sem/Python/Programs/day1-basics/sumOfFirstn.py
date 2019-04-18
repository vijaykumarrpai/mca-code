# write a python program to print sum of first n numbers
num = int(input("Enter the number : "))
i = 1; sum = 0
while i <= num:
    sum += i
    i += 1
else:
    print("The sum is : ", sum)
