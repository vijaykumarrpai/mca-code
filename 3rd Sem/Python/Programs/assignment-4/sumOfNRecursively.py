def sum_N(num):
    if num <= 1:
        return num
    else:
        return num + sum_N(num - 1)

num = int(input("Enter number to calculate sum : "))
print("Sum of N numbers : ", sum_N(num))