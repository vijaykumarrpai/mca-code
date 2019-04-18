num = int(input("Enter the number to know its factorial : "))

def factorial(num):
    fact = 1
    for i in range(1,num+1):
        fact = fact * i
    return fact

print("Factorial of the given number is : ", factorial(num))