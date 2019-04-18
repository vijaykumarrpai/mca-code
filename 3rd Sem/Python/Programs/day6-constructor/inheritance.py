# WAP which has a base class called user and has a class variable called name and a method called as print name that displays a particular name as object. Define another class as programmer and inherits the class user and has an instance variable called language and has function called display and displays 'programming in'. Create two objects say ram and shyam. Ram is an object of user class and shyam is the object of programmer class and display the name of the programmer and language in which he programs.

class User:
    name = ""
    def __init__(self, name):
        self.name = name

    def print(self):
        print('The name of the user is : ' + self.name)

class Programmer(User):
    def __init__(self, name):
        self.name = name
    
    def display(self, language):
        self.language = language
        print('Programming in : ' + self.language)

user1 = User('Ram')
user1.print()
user2 = Programmer('Shyam')
user2.print()
user2.display("Python")
