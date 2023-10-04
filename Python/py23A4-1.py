no = int(input("7보다 크고 120보다 작은수를 입력: "))

if 7 > no > 120:
    print("조건에 부합하지 않는 수를 입력했습니다.")

if no % 2 != 0 and no % 3 != 0 and no % 5 != 0 and no % 7 != 0:
    print("{}는 소수!!!".format(no))
else:
    print("%d는 약수가 많다" % no)
