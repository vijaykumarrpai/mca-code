class ComplexNumber: 
    def __init__(self, r = 0, i = 0):
        self.real = r
        self.imag = i
            
    def __gt__(self, other):
        if self.real > other.real:
            return True
        elif self.real == other.real:
            if self.imag > other.imag:
                return True
            else:
                return False
        else:
            return False

r = int(input("Enter the real part : "))
i = int(input("Enter the imaginary part : "))
u = ComplexNumber(r, i)

r = int(input("Enter the real part : "))
i = int(input("Enter the imaginary part : "))
v = ComplexNumber(r,i)

w = u > v
print(w)