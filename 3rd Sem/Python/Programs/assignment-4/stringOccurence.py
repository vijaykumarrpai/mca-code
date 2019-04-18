def occurence(str, x):
    count = str.count(x)
    print(x, "occurs", count, "times")
    return

occurence(input("Enter a string : "), input("Enter the character to search : "))