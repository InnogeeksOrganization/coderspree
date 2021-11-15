a=int(input())
b=int((a/2)+1)
c=1
for i in range (1,a+1):
    for j in range (1,b+1):
        print("* ",end=" ")
    for j in range (1,c+1):
        print("  ")
    for j in range (1,b+1):
        print("* ",end="")
   
    if (i<((a+1)+1)):
        b-=1
        c+=2
    else:
        b+=1
        c-=2