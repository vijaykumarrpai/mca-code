num = int(input("Enter the number to know its fibonacci series : "))

def fibonacci(num):
    if(num <= 1):
        return num
    x = fibonacci(num - 1)
    y = fibonacci(num - 2)
    return x + y

print("Fibonacci of the number is : ", fibonacci(num))