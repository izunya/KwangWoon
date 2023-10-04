import turtle

swidth,sheight = 500, 500

turtle.title("모시조개 그리기")
turtle.shape('turtle')
turtle.turtlesize(0.01)
turtle.setup(width=swidth + 50,height=sheight + 50)
turtle.screensize(swidth,sheight)
turtle.penup()
turtle.goto(0,-sheight / 2)
turtle.pendown()
turtle.speed(1000)

for r in range(1,250):
    if r % 6 == 0:
        turtle.pencolor('red')
    elif r % 5 == 0:
        turtle.pencolor('orange')
    elif r % 4 == 0:
        turtle.pencolor('yellow')
    elif r % 3 == 0:
        turtle.pencolor('green')
    elif r % 2 == 0:
        turtle.pencolor('blue')
    elif r % 1 == 0:
        turtle.pencolor('navyblue')
    else:
        turtle.pencolor('purple')
    turtle.circle(r)

turtle.done()