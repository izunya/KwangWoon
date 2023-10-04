import random as r
import turtle

colors = ['red', 'orange', 'yellow', 'green', 'blue', 'navy', 'purple']
t = turtle.Turtle()
turtle.bgcolor('black')
t.speed(1000)
t.width(3)

length = 10
while length < 1000:
    t.forward(length)
    t.pencolor(colors[length % 7])
    t.right(88)
    length += 5

turtle.done()