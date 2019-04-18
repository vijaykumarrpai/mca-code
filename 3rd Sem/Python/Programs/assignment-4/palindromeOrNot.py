def reverseNum(num):
    temp = num
    rev = 0
    while(num>0):
        rem = num % 10
        rev = rev * 10 + rem
        num = num // 10

    if temp == rev:
        print(temp, "is a palindrome.")
    else:
        print(temp, "is not a paindrome.")
    return

def reverseStr(string):
    rstr = ""
    for i in range(1, len(string) + 1):
        rstr = rstr + string[-i]
    if rstr == string:
        print(string, "is a palindrome.")
    else:
        print(string, "is not a palindrome.")
    return

def palindrome(x):
    if isinstance(x, int):
        reverseNum(x)
    else:
        reverseStr(x)
    return

palindrome(input("Enter an input to check if it is palindrome or not : "))