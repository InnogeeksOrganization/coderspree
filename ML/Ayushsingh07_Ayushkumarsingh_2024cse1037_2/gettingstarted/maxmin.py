n=int(input())
a=list(map(int,input().split(" ")))
a.sort()
print(a[len(a)-2],a[1])
