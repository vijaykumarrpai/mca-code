try:
    num1 = int(input("Enter first number : "))
    num2 = int(input("Enter second number : "))

except Exception as e:
    print("Oops! sys.exe_info()[0]", "occured")

def calc_gcd(num1, num2):
    if(num2 == 0):
        return num1
    else:
        try:
            return calc_gcd(num2, num1 % num2)
        except Exception as e:
            print("Some exception in recursion.")
            print(e)

try:
    print("GCD :", calc_gcd(num1, num2))
except Exception as e:
    print("Some exception")