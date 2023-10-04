n1, n2, adN, sN, ans, i = 0, 0, 0, 0, 0, 0

n1 = int(input(" *** 첫 번째 숫자를 입력하세요: "))
n2 = int(input(" *** 두 번째 숫자를 입력하세요: "))
adN = int(input(" *** 더할 숫자를 입력하세요: "))

sN = n1 + adN
for i in range(n1, n2 + 1, adN):
    ans += i
print("%d + %d + ... + %d는(은) %d입니다." % (n1, sN, n2, ans))