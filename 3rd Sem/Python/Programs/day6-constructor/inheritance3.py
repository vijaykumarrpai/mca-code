# create a base class called as student that has srn and student name as its instance variable. Create a method called as display that displays name and srn. Create another class called as marks where there is sub1, sub2, sub3 as its instance variable. you have a method called as total that evaluates total of all marks. Create a derived class called as result that displays whether the student is passed or failed based on marks and also displays the entire student information.

class Student:
    srn = ""
    name = ""

    def __init__(self, srn, name):
        self.srn = srn
        self.name = name

    def display(self):
        print("The srn and name of the student is : {} - {}".format(self.srn, self.name))

class Marks(Student):
    sub1 = ""
    sub2 = ""
    sub3 = ""

    def __init__(self, sub1, sub2, sub3, tot):
        self.sub1 = sub1
        self.sub2 = sub2
        self.sub3 = sub3
        self.tot = self.sub1 + self.sub2 + self.sub3

    def total(self):
        print("The total of all 3 subjects of the student is : {}".format(self.tot))

class Result(Marks):

    def __init__(self, srn, name, tot):
        self.srn = srn
        self.name = name
        self.tot = tot

    def res(self):
        if(self.tot > 120):
            print("The student has passed")
        else:
            print("The student has failed")

s1 = Student(2013, "Vijaykumar")
s1.display()
m1 = Marks(50,60,70,0)
m1.total()
r1 = Result(2013, "Vijaykumar", 180)
r1.res()