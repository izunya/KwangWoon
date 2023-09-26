import random
import turtle


def scl(x, y):
    global r, g, b
    turtle.pencolor((r, g, b))
    turtle.pendown()
    turtle.goto(x, y)


def scr(x, y):
    turtle.penup()
    turtle.goto(x, y)


def scm(x, y):
    global r, g, b
    tSize = random.randrange(1, 10)
    turtle.shapesize(tSize)
    r = random.random()
    g = random.random()
    b = random.random()


# 변수 선언 부분
pSize = 10
r, g, b = 0.0, 0.0, 0.0

# 메인 코드 부분
turtle.title('거북이로 그림 그리기')
turtle.shape('turtle')
turtle.pensize(pSize)

turtle.onscreenclick(scl, 1)
turtle.onscreenclick(scm, 2)
turtle.onscreenclick(scr, 3)

turtle.done()
