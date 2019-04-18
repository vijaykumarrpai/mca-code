class Shape:
    get_color = ""
    set_color = ""
    def __init__(self, get_color, set_color = "black"):
        self.get_color = get_color
        self.set_color = set_color

    def print(self):
        print("The border color is : {}".format(self.set_color))

class Rectangle(Shape):
    get_length = ""
    get_breadth = ""
    set_length = ""
    set_breadth = ""
    get_area = ""
    get_perimeter = ""

    def __init__(self, get_length, get_breadth):
        self.get_length = get_length
        self.get_breadth = get_breadth
        self.set_length = self.get_length
        self.set_breadth = self.get_breadth

        self.get_area = self.set_length * self.set_breadth
        self.get_perimeter = 2 * (self.set_length + self.set_breadth)

    def area(self):
        print("Area of rectangle is : {}".format(self.get_area))

    def perimeter(self):
        print("Perimeter of rectangle is : {}".format(self.get_perimeter))

class Circle(Rectangle):
    get_radius = ""
    set_radius = ""
    get_area = ""
    get_perimeter = ""

    def __init__(self, get_radius):
        self.get_radius = get_radius
        self.set_radius = self.get_radius
        self.get_area = 3.142 * self.set_radius * self.set_radius
        self.get_perimeter = 2 * 3.142 * self.set_radius

    def circleArea(self):
        print("Area of circle is : {}".format(self.get_area))

    def circlePerimeter(self):
        print("Area of perimeter is : {}".format(self.get_perimeter))

c1 = Shape("red")
c1.print()

a1 = Rectangle(10,20)
a1.area()
a1.perimeter()

b1 = Circle(5)
b1.circleArea()
b1.circlePerimeter()