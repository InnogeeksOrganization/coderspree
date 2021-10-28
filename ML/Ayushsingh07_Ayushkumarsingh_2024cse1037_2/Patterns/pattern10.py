a=int(input())
s1=1
s2=int(a/2)
c=-1
for i in range(1,a+1):
    for j in range(1,s2+1):
        print("",end="\t")
    print("*\t",end="\t")
    for j in range(1,c):
        print("",end="\t")
    if (i>1 and i<a):
        print("*",end="\t")
    print()
    if (i<=a/2):
        s2-=1
        c+=2
    else:
        s2+=1
        c-=2
    