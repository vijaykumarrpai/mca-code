# Encapsulation allows programmers better control of how data flows in their programs and it protects that data.
import sys
a = 40
b = a
c = [b]
# del a # in python destructor is not called explicitly, it is called implicitly
print(sys.getrefcount(a))

b = 100
print(sys.getrefcount(b))
print(sys.getrefcount(c))

c[0] = -1
print(sys.getrefcount(b))
print(sys.getrefcount(c))