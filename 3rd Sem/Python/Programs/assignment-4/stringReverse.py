string = input("Enter a string to reverse it : ")

def reverse(string):
    string = string[::-1]
    return string

print("The reverse of given string is : ", reverse(string))