import turtle as t
import random as r

t.shape("turtle")

c = ["yellow","red","purple","blue","green","orange","black","brown","pink","gray"]
def draw_shape(t,c,length,sides,x,y):
    t.up()
    t.goto(x,y)
    t.down()
    t.color(c)
    t.fillcolor(c)
    t.begin_fill()
    for i in range(sides):
        t.forward(length)
        t.left(360/sides)
    t.end_fill()
    

for i in range(10):
    draw_shape(t,c[i],r.randint(50,100),r.randint(3,10),r.randint(-200,200),r.randint(-200,200))