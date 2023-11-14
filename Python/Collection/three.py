c ={}
while 1:
    n = input("(입력모드)이름을 입력하시오: ")
    if not n:
        break;
    t = input("전화번호를 입력하시오: ")
    c[n] = t
while 1:
    n = input("(검색모드)이름을 입력하시오: ")
    if n in c:
        print("%s 의 전화번호는 %s 입니다." % (n,c[n]))
    else:
        break;