# a. 
num = int(input("Enter a number to print number of patterns : "))

for i in range(num):
    print((str(i) + " ") * i)
    
# b.
num = int(input("Enter a number to print number of patterns : "))
k = 2 * num - 2
for i in range(0, num):

    for j in range(0, k):
        print(end = " ")
    k = k - 2

    for j in range(0, i+1):
        print("* ", end="")
    print("\n")  

# c.
num = int(input("Enter a number to print number of patterns : "))
n = 1

for i in range(0, num):
    for j in range(0, i + 1):
        print(n, end=" ")
        n = n + 1
    print("\n")

# d. 
num = int(input("Enter a number to print number of patterns : "))

n = 1
for i in  range(0,num):
    n = 1
    for j in range(0, i+1):
        print(n, end=" ")
        n = n + 1
    print("\n")

# e. 
num = int(input("Enter a number to print number of patterns : "))
k = 0

for i in range(1, num + 1):
    for j in range(1, (num - i) + 1):
        print(end=" ")
    while k != (2 * i - 1):
        print("* ", end="")
        k = k + 1
    k = 0
    print("\n")

# f.
num = int(input("Enter a number to print number of patterns : "))
n = 65

for i in range(0, num):
    for j in range(0, i + 1):
        ch = chr(n)
        print(ch, end= " ")
        n = n + 1
    print("\n")

# g.
num = int(input("Enter a number to print number of patterns : "))
n = 65

for i in  range(0, num):
    for j in range(0, i+1):
        ch = chr(n)
        print(ch, end=" ")
    n = n + 1
    print("\n")

# h. 
num = int(input("Enter a number to print number of patterns : "))
for i in range(0, num):
    for j in range(num, i, -1):
        print("* ", end="")
    print("\n")

# i.
num = int(input("Enter a number to print number of patterns : "))
n = 1
count = 0
decr = 8

for i in range(0, num):
    for k in range(0 ,decr):
        print(end=" ")
    for j in range(0, i):
        count = count + 1
    n = count
    temp = n
    for j in range(0, i):
        print(n, end=" ")
        n = n - 1
    print("\n")
    n = temp
    decr = decr - 2

# j. 
num = int(input("Enter a number to print number of patterns : "))

for i in range(num, 0, -1):
    for k in range(num, i, -1):
        print(" ", end="")
    for j in range(0,i):
        print("* ", end="")
    print("\n")

# k.
num = int(input("Enter a number to print number of patterns : "))

for i in range(1, num + 1):
    for j in range(i, 0, -1):
        print(j, "", end="")
    print("\n")
# l. 
num = int(input("Enter a number to print number of patterns : "))
for i in range(1, num + 1):
    for j in range(num, num - i, -1):
        print(j, " ", end=""),
    print("")

# m. 
num = int(input("Enter a number to print number of patterns : "))
for i in reversed(range(1, num + 1)):
    print(i * str(i), " ", end="")
    print("\n")

# n.
num = int(input("Enter a number to print number of patterns : "))
for i in range(1, num + 1):
    for j in range(i, num + 1):
        print(j, " ", end=""),
    print("\n")

# o. 
num = int("Enter a number to print number of patterns : ")
for i,j in zip(range(1, num + 1), reversed(range(0,num))):
    print(j*' ', i * str(i), " ", end="")
    print("\n")

# p. 
num = int(input("Enter a number to print number of patterns : "))
count = num 
for i in range(1, num + 1):
    print(count * ' ',end='')
    for j in reversed(range(1,i + 1)):
        print(j,end="")
    print("\n")
    count-=1

# q. 
num = int(input("Enter the number to print number of patterns : "))
count = num
for i in range(1, num+1):
    print((count-1) * ' ',end='')
    for j in range  (1,i+1):
        print(j,end=' ')
    print('\n')
    count-=1

# r.
num = int(input("Enter the number to print number of patterns : "))
count = 0
sum = num
for i in range(1, num + 1):
    print(count * ' ', end="")
    for j in range(num, i - 1, -1):
        print(j, end=" ")
    print("\n")
    count+=1

# s.
num = int(input("Enter the number to print number of patterns : "))
count = 0
sum = num
for i in range(1, num + 1):
    print(count * ' ', end='')
    for j in range(sum, 0, -1):
        print(j, end= ' ')
    print('\n')
    count+=1
    sum-=1