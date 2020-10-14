import turtle


my_turtle = turtle.Turtle()
myWin = turtle.Screen()


def draw(myTurtle, line_length):
    if length > 0:
        myTurtle.foward(lenght)
        myTurtle.left(90)
        draw(myTurtle, length-10)


draw(myTurtle, 100)
myWin.exitonClick()
