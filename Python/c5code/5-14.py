import random
n, nbs = 0, ""

nbs = random.choices(range(1, 21), k = 20)
print("생성된 리스트", nbs)

for n in range(1, 21):
    if n in nbs:
        print("숫자 %d는(은) 뽑혔습니다." % n)