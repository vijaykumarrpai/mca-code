#Write a function which can be modified either to work with addition, subtraction, multiplication and division of 2 numbers
def math(*num):
    num1 = int(input("Enter the first number : "))
    num2 = int(input("Enter the second number : "))

    print(num1 + num2)
    print(num1 - num2)
    print(num1 * num2)
    print(num1 / num2)
    
    return

print(math())