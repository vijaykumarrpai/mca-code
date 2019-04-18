# create a class called person and instance variable - name, age, country. initially set attributes and delete attribute of age and reset

class Person:
    name = "Vijaykumar"
    age  = 36
    country = "India"

print(getattr(Person, "name"))
x = hasattr(Person, 'age')
print(x)

delattr(Person, 'age')
# print(getattr(Person, "age"))
setattr(Person, 'age', 40)

x = hasattr(Person, 'age')
print(x)

print(getattr(Person, "name"))
print(getattr(Person, "age"))