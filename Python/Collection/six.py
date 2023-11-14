import turtle as t
import random as r

t.shape("turtle")

t.Screen().bgcolor("black")

c = ["yellow","red","purple","blue","green","orange","black","brown","pink","gray"]
def draw_shape(t,c,length,x,y):
    t.up()
    t.goto(x,y)
    t.down()
    t.color(c)
    t.fillcolor(c)
    t.begin_fill()
    for i in range(5):
        t.forward(length)
        t.right((360/5)*2)
        t.forward(length)
        t.left(360/5)
    t.end_fill()
    

for i in c:
    draw_shape(t,i,r.randint(50,100),r.randint(-200,200),r.randint(-200,200))