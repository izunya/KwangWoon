import turtle

t = turtle.Turtle()
t.shape('turtle')

for i in range(50):
    t.forward(50)
    t.left(30+i)

turtle.exitonclick()
