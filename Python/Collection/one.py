# 1문제
a = [] # res = 0
for _ in range(5):
    a.append(int(input("정수를 입력하시오: "))) # res += int(input("정수를 입력하시오: "))
print("평균=",sum(a)/len(a)) # print("평균=",res/5)