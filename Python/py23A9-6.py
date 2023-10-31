l = [2, 3, 4, 5, 6, 5, 2, 1, 7, 8, 5, 3, 2, 1]
print(l.count(2))
l.remove(3)
print(l)
del (l[3])
print(l)

mix = [100, '둘리', 2.154, [1, 2, 3], 'Ehcl', 55]
lst = mix.copy() #HC
lst.remove('둘리')
print(mix)
print(lst)

mixa=mix #SC
mix.remove('둘리')
print(mixa)