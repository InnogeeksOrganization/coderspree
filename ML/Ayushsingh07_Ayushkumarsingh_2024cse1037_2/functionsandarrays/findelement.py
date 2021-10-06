a=[]
for _ in range(int(input())):
    a.append(int(input()))
d=int(input())
if d in a:
    print(a.index(d))
else:
    print("-1")