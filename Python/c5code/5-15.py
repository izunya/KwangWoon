import random
nA1, uA2, uB1, uB2, tA, tB= 0, 0, 0, 0, 0, 0

nA1 = random.randint(1, 6)
uA2 = random.randint(1, 6)
uB1 = random.randint(1, 6)
uB2 = random.randint(1, 6)
tA = nA1 + uA2
tB = uB1 + uB2

print("A의 주사위 숫자는 %d %d입니다." % (nA1, uA2))
print("B의 주사위 숫자는 %d %d입니다." % (uB1, uB2))
if tA > tB:
    print("A가 이겼습니다.")
elif tA < tB:
    print("B가 이겼습니다.")
else:
    print("둘이 비겼습니다.")