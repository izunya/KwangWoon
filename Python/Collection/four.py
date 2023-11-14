import turtle

t = turtle.Turtle()
t.shape("turtle")

color = ["yellow","red","purple","blue"]

def draw_square(x,y,c):
    t.up()
    t.goto(x,y)
    t.down()
    t.color(c)
    t.begin_fill()
    for i in range(4):
        t.forward(50)
        t.left(90)
    t.end_fill()

for i in range(4):
    draw_square(i*100,0,color[i])