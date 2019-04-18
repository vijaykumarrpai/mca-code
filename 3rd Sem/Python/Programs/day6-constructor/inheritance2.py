# define a class called as Person that has instance variable of name, age and gender and has method called as display that displays 3 instance variables. Define a class called as marks and has instance variable of semester, sub1, sub2, sub3. Write a display function that displays semester and total marks. Define a class called as students and inherits both person and marks and write function as result and calls display function of person class and display function of marks class.

class Person:
    name = ""
    age = ""
    gender = ""

    def __init__(self, name, age, gender):
        self.name = name
        self.age = age
        self.gender = gender

    def display(self):
        print("The name age and gender of the person is : {} {} {}".format(self.name, self.age, self.gender))

class Marks:
    semester = ""
    sub1 = ""
    sub2 = ""
    sub3 = ""
    total = ""

    def __init__(self, semester, sub1, sub2, sub3):
        self.semester = semester
        self.sub1 = sub1
        self.sub2 = sub2
        self.sub3 = sub3
        self.total = self.sub1 + self.sub2 + self.sub3

    def display(self):
        print("Semester {} total marks is : {}".format(self.semester, self.total))

class Students(Person, Marks):
    def __init__(self, name, total):
        self.name = name
        self.total = total
    
    def result(self):
        print("The student {} has scored : {}".format(self.name, self.total))

p1 = Person("Vijaykumar", "23", "Male")
p1.display()

m1 = Marks("3rd ", 50, 60, 70)
m1.display()

r1 = Students("Vijaykumar", 180)
r1.result()



