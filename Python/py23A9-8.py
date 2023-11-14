a=[]
b=[]
value= 0
for i in range(3):
    for j in range(4):
        value+=1
        a.append(value)
    b.append(a)
    a=[]
print(b)
for i in range(3):
    print(b[i])
for i in range(3):
    for j in range(4):
        print(b[i][j],end=" ")
    print()
