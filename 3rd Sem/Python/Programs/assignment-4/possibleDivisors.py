def divisor(num):
    x = []
    for i in range(1, num + 1):
        if (num % i) == 0:
            x.append(i)
    print("Divisors of ", num,"is", x)
    return x

def sum(num = []):
    total = 0
    length = len(num)
    for i in num:
        total = total + i
    print("Number of divisors : ", length)
    print("Divisors num : ", total)
    return

n = int(input("Enter a number : "))
sum(divisor(n))