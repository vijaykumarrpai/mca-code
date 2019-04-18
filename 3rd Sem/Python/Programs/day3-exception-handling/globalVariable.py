total = 0
# function defintion is here
def sum(var1, var2):
    global total
    total = var1 + var2
    print("Sum of 2 numbers printing in function : ")
    return total

a = sum(5,7)
print("Value of total variable : ", total)
print("Value of total variable : ", a)