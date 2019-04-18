class Student:
    def __init__(self, name, srn, gender):
        self.name = name
        self.srn = srn
        self.gender = gender

    def display(self):
        print("The name of the Student is : {}".format(self.name))
        print("The srn of the student is : {}".format(self.srn))
        print("The gender of the student is : {}".format(self.gender))

class Stud_res(Student):
        def __init__(self, name, srn, gender):
            self.name = name
            self.srn = srn
            self.gender = gender

        def internals(self, s1, s2, s3):
            self.s1 = s1
            self.s2 = s2
            self.s3 = s3
            self.isatotal = self.s1 + self.s2 + self.s3
            self.isatotal2 = ((self.s1 + self.s2 + self.s3) * .40)
            print("ISA total : {}".format(self.isatotal))
            print("40 percent of ISA is : {}".format(self.isatotal2))

        def externals(self, sub1, sub2, sub3):
            self.sub1 = sub1
            self.sub2 = sub2
            self.sub3 = sub3
            self.esatotal = self.sub1 + self.sub2 + self.sub3
            self.esatotal2 = ((self.sub1 + self.sub2 + self.sub3) * .60)
            print("ESA total : {}".format(self.esatotal))
            print("60 percent of ESA is : {}".format(self.esatotal2))

        def calcsgpa(self):
            self.sgpa = ((self.isatotal2 + self.esatotal2) / 228) * 10
            print("Present semester sgpa is : {}".format(self.sgpa))

        def calccgpa(self):
            self.cgpa = ((self.isatotal2 + self.esatotal2) / 228) * 10
            print("Present year cgpa is : {}".format(self.cgpa))

s1 = Stud_res("Vijaykumar", 2013, "Male")
s1.display()
s1.internals(30,35,30)
s1.externals(80,90,70)
s1.calcsgpa()
s1.calccgpa()