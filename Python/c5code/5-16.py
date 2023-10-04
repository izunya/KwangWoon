import turtle
import math
import random

## 전역 변수 선언 부분 ##
t1, t2, t3 = [None] * 3
t1X, t1Y, t2X, t2Y, t3X, t3Y = [0] * 6
swidth, sheight = 300, 300

## 메인 코드 부분 ##
if __name__ == "__main__":
    turtle.title("거북이 만나기")
    turtle.setup(width=swidth + 50, height=sheight + 50)
    turtle.screensize(swidth, sheight)

    t1 = turtle.Turtle('turtle')
    t1.color('red')
    t1.penup()
    t2 = turtle.Turtle('turtle')
    t2.color('green')
    t2.penup()
    t3 = turtle.Turtle('turtle')
    t3.color('blue')
    t3.penup()

    t1.goto(-100, -100)
    t2.goto(0, 0)
    t3.goto(100, 100)

    while True:
        for turtle in [t1, t2, t3]:
            angle = random.randrange(0, 360)
            dist = random.randrange(1, 50)
            turtle.left(angle)
            turtle.forward(dist)

            if not (-swidth / 2 < turtle.xcor() < swidth / 2) or not (-sheight / 2 < turtle.ycor() < sheight / 2):
                turtle.goto(0, 0)

        t1X, t1Y = t1.xcor(), t1.ycor()
        t2X, t2Y = t2.xcor(), t2.ycor()
        t3X, t3Y = t3.xcor(), t3.ycor()

        if math.sqrt(((t1X - t2X) ** 2) + ((t1Y - t2Y) ** 2)) <= 20 or \
                math.sqrt(((t1X - t3X) ** 2) + ((t1Y - t3Y) ** 2)) <= 20 or \
                math.sqrt(((t2X - t3X) ** 2) + ((t2Y - t3Y) ** 2)) <= 20:
            for turtle in [t1, t2, t3]:
                turtle.shapesize(random.randint(1, 5))

    turtle.done()

