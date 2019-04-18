class complex:
    def __init__(self, real, imag):
         self.real = real
         self.imag = imag
    def __mul__(self, other):
         return (self.real*other.real-self.imag*other.imag, self.real*other.imag+self.imag*other.real)
    def __truediv__(self, other):
        return (self.real / other.real-self.imag/other.imag, self.real/other.imag+self.imag / other.imag)

A = complex(16,4)
B = complex(10,5)

print ("Multiplication : " ,A*B)
print("Division : ", A/B)