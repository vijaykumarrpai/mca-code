# def printinfo(arg1, *vararg):
#     print(arg1)
#     for v in vararg:
#         print(v)
#     return None
# printinfo(10)
# printinfo(70,60,50)
# printinfo(70,60)
# printinfo(10,20,30,40,50)
# # printinfo()

def printinfo(name, age):
    print("Name : ", name)
    print("Age : ", age)
    print(type(name))
    print(type(age))
    return

printinfo(age = 23, name="Vijay") # keyword parameter
printinfo(23, "Vijay") # positional parameter
#printinfo("Vijay") # required parameter