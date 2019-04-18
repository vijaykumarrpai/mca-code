# import module sys to get the type of exception

import sys
randomList = ['a',0,2]
for entry in randomList:
    try:
        print("The entry is : ", entry)
        r = 1/int(entry)
        break
    except:
        print("Oops! sys.exe_info()[0]", "occured")
        print("Next entry")
        print()

print("The reciprocal of", entry, "is", r)

try:
    a = int(input("Enter a positive integer : "))
    if a <= 0:
        raise ValueError("That is not a positive number!")
except ValueError as ve:
        print(ve)

try:
    raise KeyboardInterrupt
finally:
    print("Goodbye, world!")