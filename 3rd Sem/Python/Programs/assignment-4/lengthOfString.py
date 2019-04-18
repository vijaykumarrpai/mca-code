string = list(("Ayush", "Sudhanva", "Karthik", "Shreedhar", "Adarsh", "Aniruddha", "Vijay"))
def string1(string):
    print("The elements of the list are : ")
    for i in string:
        print("->", i)
        print("Length = ", len(i))
    return
string1(string)