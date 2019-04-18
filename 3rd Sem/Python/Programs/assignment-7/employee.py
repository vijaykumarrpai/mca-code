class Basic_info:
    def __init__(self, name, id, age, gender):
        self.name = name
        self.id = id
        self.age = age
        self.gender = gender

class Dept_info:
    def __init__(self, dept_name, assigned_work, time_comp):
        self.dept_name = dept_name
        self.assigned_work = assigned_work
        self.time_comp = time_comp

class Employee(Basic_info, Dept_info):
    def __init__(self, BasicInfo, DeptInfo):
        self.BasicInfo = BasicInfo
        self.DeptInfo = DeptInfo

    def get_basic_info(self):
        print(self.BasicInfo.name)
        print(self.BasicInfo.id)
        print(self.BasicInfo.age)
        print(self.BasicInfo.gender)

    def get_dept_info(self):
        print(self.DeptInfo.dept_name)
        print(self.DeptInfo.assigned_work)
        print(self.DeptInfo.time_comp)

BasicInfo = Basic_info("Vijaykumar", 123, 23, "Male")
DeptInfo = Dept_info("CS", "AI", "3 months")
e1 = Employee(BasicInfo, DeptInfo)
e1.get_basic_info()
e1.get_dept_info()