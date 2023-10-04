## 변수 선언 부분 ##
s, ans, nS, n1, n2 = 0, 0, "", 0, 0

## 메인 코드 부분 ##
s = int(input("1. 입력한 수식 계산  2. 두 수 사이의 합계: "))

if s == 1:
    nS = input(" *** 수식을 입력하세요: ")
    ans = eval(nS)
    print(" %s 결과는 %5.1f입니다." % (nS, ans))
elif s == 2:
    n1 = int(input(" *** 첫 번째 숫자를 입력하세요: "))
    n2 = int(input(" *** 두 번째 숫자를 입력하세요: "))
    for i in range(n1, n2 + 1):
        ans = ans + i
    print("%d + ... + %d는 %d입니다." % (n1, n2, ans))
else:
    print("1 또는 2만 입력해야 합니다.")