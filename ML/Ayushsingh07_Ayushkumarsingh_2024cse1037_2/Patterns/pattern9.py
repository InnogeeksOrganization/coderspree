a=int(input())
for i in range(1,a+1):
    for j in range(1,a+1):
        if((i==j) or (i+j==a+1)):
            print("*",end="\t")
        else:
            print("",end="\t")
    print()