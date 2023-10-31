a = []
sum = 0
for i in range(4):
    a.append(int(input(str(i + 1) + "번째 넣어:")))
    sum += a[i]

print(a, sum)