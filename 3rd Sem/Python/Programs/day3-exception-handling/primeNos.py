numbers = input("Enter the list of numbers to know the prime numbers in it : ").split(',')
temp = (list(numbers))
print (temp)

def primes(numbers):
    sieve = [True] * (numbers+1)
    for p in range(2, numbers+1):
        if(sieve[p]):
            print(p)
            for i in range(p, numbers+1, p):
                sieve[i] = False
    return temp

primes(numbers)
print("The prime numbers are : ", numbers)