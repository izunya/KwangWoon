import random as r
c = [0,0,0,0,0,0]

while True:
    v = r.randint(0,5)
    c[v] += 1
    if sum(c) == 1000:
        break
for i in range(6):
    print("주사위가 %d인 경우는 %d" % (i+1,c[i]))