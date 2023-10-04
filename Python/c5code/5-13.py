n, ss, ys, i = 0, 0, 0, 0

n = int(input(" *** 2 이상의 정수를 입력하세요: "))
if n >= 3:
    for i in range(2, n):
        if n % i == 0:
            ys = 1
        else:
            ss = 1
elif n == 2:
    ss = 1

if ys == 1:
    print(" %d는(은) 소수가 아닙니다." % n)
elif ss == 1:
    print(" %d는(은) 소수입니다." % n)
else:
    print(" 2 이상의 정수를 입력하세요.")