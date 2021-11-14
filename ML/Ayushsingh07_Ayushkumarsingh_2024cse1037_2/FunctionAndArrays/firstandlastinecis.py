a=[]
b=[]
for _ in range(int(input())):
    a.append(int(input()))
d=int(input())
c=a.index(d)
print(c)
for i in range (0,len(a)):
    if a[i]==d:
        b.append(i)
print(b[-1])