# WAP to search for alphanumeric values in a string and print its starting position
string = input("Enter the alphanumeric value : ")    
for i in string:
    if i.isalnum():
        print(True)
    else:
        break