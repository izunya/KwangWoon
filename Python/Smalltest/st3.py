a = []

for i in range(3):
    a.append(list(input().split()))

for i in range(3):
    name = a[i][0]
    kor = int(a[i][1])
    eng = int(a[i][2])
    math = int(a[i][3])
    res = kor + eng + math
    avg = res / 3
    print("이름 국어 영어 수학 합계 평균\n%s %d %d %d %d %.2f" % (name, kor, eng, math, res, avg))