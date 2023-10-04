i = int(input("성적입력(0~100사이 입력): "))

if i >= 95:
    print("A+ 좋겠다")
elif i >= 90:
    print("A 너도 좋겠다")
elif i >= 85:
    print("B+ 만족해")
elif i >= 80:
    print("B 소소해")
elif i >= 75:
    print("C+ 아깝다")
elif i >= 70:
    print("C 좀하지...")
elif i >= 65:
    print("D+ 안돼~")
elif i >= 60:
    print("D 가서 빌어")
else:
    print("F ...")

a = int(input("윤년 구하기 : "))

if a % 4 == 0 and a % 100 != 0 or a % 400 == 0:
    print("%d는 윤년입니다." % a)
else:
    print("{}는 윤년이 아닙니다.".format(a))

if a % 4 == 0:
    if a % 100 == 0:
        if a % 400 == 0:
            print("%d는 윤년입니다." % a)
        else:
            print("{}는 윤년이 아닙니다.".format(a))
    elif a % 400 == 0:
        print("%d는 윤년입니다." % a)
    else:
        print("{}는 윤년이 아닙니다.".format(a))
else:
    print("{}는 윤년이 아닙니다.".format(a))
