# write a generator for displaying the fibonacci series

def fibonacci(n):
    a, b = 0, 1
    
    while a < n:
        yield a
        a, b = b, a + b

print("Using for in loop")
for i in fibonacci(5):
    print(i)

