# accept a number and check if the number is a multiple of 3 and multiple of 6 and divisible by 9
num = int(input("Enter a number : "))
if num % 3 == 0:
    print("It is divisible by 3")
    if num % 6 == 0:
        print("It is divisible by 6")
        if num % 9 == 0:
            print("It is divisible by 9")
            if num % 3 == 0 and num % 6 == 0 and num % 9 == 0:
                    print("It is divisible by 3, 6, 9")
            else: 
                    print("Not divisible by 3 or 6 or 9")
        else:
            print("Not divisible by 9")
    else:
        print("Not divisible by 6")
else:
    print("Not divisible by 3")