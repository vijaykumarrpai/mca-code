class Lion:
    #  pass #use this if class is empty
    # Class Attribute
    species = 'mammal'
    # initializer/ instance attributes
    def __init__(self, name, age):
        self.name = name
        self.age = age
    def description(self):
        return "{} is {} years old".format(self.name, self.age)
    # instance method
    def speak(self, sound):
        return "{} says {}".format(self.name, sound)

d = Lion("Rocky", 4)
print(d.description())
print(d.speak("Roar"))
# print(Lion())
# print(Lion())
# a = Lion()
# b = Lion()
# print(a == b)
# print(type(a))
# print(type(b))
# print(a is b)