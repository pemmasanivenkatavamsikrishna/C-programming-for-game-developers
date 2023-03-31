import math

# Define a union shape to store either a circle or rectangle
class Shape:
    def __init__(self, shape_type, radius=None, length=None, width=None):
        self.shape_type = shape_type
        self.radius = radius
        self.length = length
        self.width = width

    # Calculate the area of the shape based on its type
    def area(self):
        if self.shape_type == "circle":
            return math.pi * self.radius ** 2
        elif self.shape_type == "rectangle":
            return self.length * self.width
        else:
            return None

# Prompt the user to enter the type of shape they want to calculate
shape_type = input("Enter the type of shape (circle or rectangle): ")

# Prompt the user to enter the appropriate dimensions
if shape_type == "circle":
    radius = float(input("Enter the radius of the circle: "))
    shape = Shape(shape_type, radius=radius)
elif shape_type == "rectangle":
    length = float(input("Enter the length of the rectangle: "))
    width = float(input("Enter the width of the rectangle: "))
    shape = Shape(shape_type, length=length, width=width)
else:
    print("Invalid shape type.")
    exit()

# Calculate and print the area of the shape
area = shape.area()
if area is not None:
    print("The area of the", shape_type, "is:", area)
else:
    print("Invalid shape type.")

