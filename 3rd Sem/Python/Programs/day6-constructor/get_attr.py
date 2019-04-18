class Student:
    student_id = ""
    student_name = ""

    # initial constructor to get the values
    def __init__(self):
        self.student_id = "013"
        self.student_name = "Vijaykumar"

student = Student()
print('\ngetattr : name of the student is = ', getattr(student, "student_name"))

print('traditional: name of the student is = ', student.student_name)