def pangram(string):
    string = string.lower()
    string = string.replace(" ", "")
    alphabets = "abcdefghijklmnopqrstuvwxyz"
    flag = True
    for char in  alphabets:
        if char in string:
            True
        else:
            flag = False
    
    if flag:
        print("The given string contains all the 26 alphabets.")
    else:
        print("The given string doesnt contain all 26 alphabets.")
    return

pangram(input("Enter a string : "))