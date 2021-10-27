a=int(input())
s1=1
s2=int(a/2)
c=1
for i in range(1,a+1):
    q=c
    for j in range(1,s2+1):
        print("",end="\t")
    for j in range (1,s1+1):
        print(q,end="\t")
        if(j<=s1/2):
            q+=1
        else:
            q-=1
    print()
    if(i<=a/2):
        c+=1
        s1+=2
        s2-=1
    else:
        c-=1
        s1-=2
        s2+=1
        