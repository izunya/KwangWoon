import random as r

numbers = []
while True:
    randno = r.randrange(1, 46)
    if len(numbers) == 6:
        break
    if randno not in numbers:
        numbers.append(randno)
print("생성된 리스트", numbers)

for i in range(0, 2):
    if i not in numbers:
        print("숫자 %d은(는) 리스트에 없나보네요" % i)
