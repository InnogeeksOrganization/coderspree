a=int(input())
b=int((2*a)-3)
c=1
for i in range(1,a+1):
    ib=1
    for j in range(1,c+1):
        print(ib,end="\t")
        ib+=1
    for j in range(1,b+1):
        print("",end="\t")
    if (i<a):
        ib=ib-1
    else:
        ib=ib-2
        c=c-1
    for  j in range(1,c+1):
        print(ib,end="\t")
        ib-=1
    b+=1
    c-=2
    print()