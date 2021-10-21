a=int(input())
q=1
for i in range (1,a+1):
    for j in range(1,i+1):
        print(q,'\t')
        q+=1
    print(end="\n")