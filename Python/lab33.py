import turtle

# Set up screen
screen = turtle.Screen()
screen.bgcolor("white")

# Create turtle
pen = turtle.Turtle()
pen.color("blue")
pen.pensize(2)
pen.speed(3)

# Draw a star
for i in range(5):
    pen.forward(100)
    pen.right(144)

# Hide the turtle and keep window open
pen.hideturtle()
screen.mainloop()