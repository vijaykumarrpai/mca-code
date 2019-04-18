num = int(input("Enter the number to know its factorial : "))

def factorial(num):
    if(num <= 1): 
        return num * factorial(num - 1)
    else:
        return 1

print("Factorial of the given number : ", factorial(num))