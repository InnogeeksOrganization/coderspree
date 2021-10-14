a = int(input())
i = 0
while i<a:
    j=0
    while j<=i:
        print("*", end = "")
        if j!=i:
            print(" ",end = "")
        j = j+1
    print("\n",end = "")
    i = i+1  