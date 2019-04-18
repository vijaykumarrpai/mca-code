num = int(input("Enter the number : "))

def pascal(x, y):
    if y == 0:
        return 1
    if x == 0:
        return y
    return (x * pascal(x - 1, y - 1)) / y

def triangle(num):
    if num <= 0:
        print("Number must be greater than zero")

    for i in range(num):
        for j in range(i + 1):
            print(int(pascal(i, j)), end="")
        print()

triangle(num)