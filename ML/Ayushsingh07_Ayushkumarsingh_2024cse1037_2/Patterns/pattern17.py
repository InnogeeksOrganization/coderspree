a=int(input())
s=1
s1=int(a/2)
for i  in range (1,a+1):
    for j in range(1,s1+1):
        if(i==(a/2)+1):
            print("*",end="\t")
        else:
            print("",end="\t")
    for j in range(1,s+1):
        print("*",end="\t")
    print()
    if(i<=a/2):
        s+=1
    else:
        s-=1
        