num1 = int(input("Enter the first number : "))
num2 = int(input("Enter the second number : "))

def add(num1, num2):
    return num1 + num2

def sub(num1, num2):
    return num1 - num2

def mul(num1, num2):
    return num1 * num2

def div(num1, num2):
    return num1 / num2

def mod(num1, num2):
    
    try:
        return num1 % num2
    except ZeroDivisionError:
        print("Cannot divide by error")

while True:
    print("1. Add")
    print("2. Sub")
    print("3. Mul")
    print("4. Div")
    print("5. Mod")
    print("6. Exit")

    Choice = int(input("Enter your choice :"))

    if Choice == 1:
        print(add(num1, num2))
    elif Choice == 2:
        print(sub(num1, num2))
    elif Choice == 3:
        print(mul(num1, num2))
    elif Choice == 4:
        print(div(num1, num2))
    elif Choice == 5:
        print(mod(num1, num2))
    else:
        print("Goodbye!")
        break
        