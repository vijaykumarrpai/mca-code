# create a class called complex number that has constructor and has two function add sub and display them
# first parameter for all functions must be self
class ComplexNumber: 
    def __init__(self, r = 0, i = 0):
        self.real = r
        self.imag = i
            
    def __add__(self, other):
        return ComplexNumber(self.real + other.real, self.imag + other.imag)

    def __sub__(self, other):
        return ComplexNumber(self.real + other.real, self.imag - other.imag)

r = int(input("Enter the real part : "))
i = int(input("Enter the imaginary part : "))
u = ComplexNumber(r, i)

r = int(input("Enter the real part : "))
i = int(input("Enter the imaginary part : "))
v = ComplexNumber(r,i)
w = u + v
print(w)

c1 = ComplexNumber(2,4)

