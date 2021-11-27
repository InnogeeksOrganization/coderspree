a=[]
for i in range(int(input())):
    a.append(int(input()))
d=int(input())
n=len(a)
while n>0:
    if d in a:
        print(d)
    else:
        for i in range (0,len(a)):
            if a[i]>d:
                print(a[i])
                print(a[i-1])
                break
        break
    n=n-1