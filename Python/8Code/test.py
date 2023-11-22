# 1 정답 : 2 , 4 , 5
ss='IT_CookBook'
print(ss[3:]) #CookBook
print(ss[0:-1]) #IT_CookBoo
print(ss[1:2]) #T
print(ss[:4]) #IT_C

# 2 정답 :
ss ='Python'
print(ss[0]) #P
print(ss[1:2]) #y
print(ss[-3:1]) #
print(ss[3:]) #hon

# 3 정답 :
str1='Hanbit'
str2='Network'
print(str1 + str2) #HanbitNetwork
print(2*str1) #HanbitHanbit
# print(str1 * str2) #오류
# print(str1 / str2) #오류
# print(str1 - str2) #오류

# 4 정답 :
inStr = 'IT_CookBook_Python'
outStr = ''

for i in range(0,len(inStr)):
    if i%2 == 0:
        outStr += inStr[len(inStr)-(1+i)]
    else:
        outStr +='#'
print("원본 내용 -->", inStr)
print("변경 내용 -->", outStr)

# 5 정답 :

ss = 'Python'

for i in range(0,len(ss)):
    print(ss[i] + "$",end='')
print('\n')

# 6 정답 : # 1. title() 2. upper() 3. swapcase() 4. lower()

# 7 정답 : 3 22 True 7
str1='코딩 중에서 파이썬 코딩이 가장 즐거운 코딩' # 총 24글자
print(str1.count('코딩')) # 3
print(str1.rfind('코딩')) # 22
print(str1.startswith('코딩')) # True
print(str1.find('파이썬')) # 7

# 8 정답 : 2
ss = 'Python 파이썬'
print(ss.replace('파이썬','Python'))

# 9 정답 :
inStr,outStr = "Python",""
strLen = len(inStr)

for i in range(0,strLen):
    outStr += inStr[strLen - (i+1)]
print("내용을 거꾸로 출력 --> %s" % outStr)

ss = "IT_CookBook"
# 10 정답 : 1
print('#'.join(ss))

# 11 정답 :
import re
inStr = input('문자열-->')

print("한글/영문자만 남김--> %s" % re.sub('[^A-Za-z0-9가-힣]', '', inStr))

# 12 정답 :
inStr = input("문자열을 입력하세요 :")
outStr = ""


upper,lower,digit,hangul,etc = "","","","",""

for i in inStr:
    if i.isalpha():
        if i.isupper():
            upper += i
        elif i.islower():
            lower += i
        else:
            hangul += i
    elif i.isdigit():
        digit += i
    else:
        etc += i

print("대문자:%s\n소문자:%s\n숫자:%s\n한글:%s\n기타:%s" % (upper,lower,digit,hangul,etc))