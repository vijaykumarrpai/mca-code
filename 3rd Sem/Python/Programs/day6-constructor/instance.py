class Student:
    def __init__(self, id, name):
        self.id = id
        self.name = name

    def display(self):
        print("The id and name of the student is : {} - {}".format(self.id, self.name))

c1 = Student('013', 'Vijaykumar')
c1.display()