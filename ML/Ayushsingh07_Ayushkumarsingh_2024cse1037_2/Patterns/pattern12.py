a=int(input())
c1=0
c2=1
for i in range(1,a+1):
    for j in range(1,i+1):
        print(c1,end="\t")
        c3=c1+c2
        c1=c2
        c2=c3
    print()