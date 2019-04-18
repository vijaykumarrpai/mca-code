#python -m pip install --upgrade pip

# x = int(input("Enter a number to see whether it is +ve or -ve"))
# if x > 0:
#     print("+ve")
# else:
#     print("-ve")

# accept a number from user and display whether it is -ve or +ve or equal to 0.

num = int(input("Enter a number to see whether it is -ve or +ve or 0"))
if num > 0:
    print("Positive number")
elif num < 0:
    print("Negative number")
else:
    print("Number is equal to 0")

