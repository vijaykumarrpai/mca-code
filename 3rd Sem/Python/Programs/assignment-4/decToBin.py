def binary(num):
    if num > 1:
        binary(num // 2)
    print(num % 2, end="")

try:
    num = int(input("Enter a decimal number : "))
except:
    print("sys.exe_info()[0]", "occured")
else:
    binary(num)