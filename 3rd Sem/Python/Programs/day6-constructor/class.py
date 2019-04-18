class A:
    pass
class B:
    pass
class C:
    pass
class D(A,B):
    pass
class E(A,C):
    pass
print(E.mro())
print(D.mro())

print(E.__mro__)
print(D.__mro__)

