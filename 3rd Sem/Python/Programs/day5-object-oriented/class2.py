class Employee:
    employeeCount = 0
    def __init__(self, name, salary):
        self.name = name
        self.salary = salary
        Employee.employeeCount += 1

    def display(self):
        return "No of employees are : %d " % Employee.employeeCount

    def details(self):
        return "The employee {}'s salary is {}".format(self.name, self.salary)

a = Employee("Vijay", 100000)
print(a.details())
print(a.display())
b = Employee("Prateek", 500000)
print(b.details())
print(b.display())
c = Employee("Ayush", 100000)
print(c.details())
print(c.display())





