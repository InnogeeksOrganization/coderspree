a=int(input())
for i in range(1, a+1):
    for j in range(a, 0, -1):
        if j > i:
            print("\t", end=' ')
        else:
            print("*\t", end=' ')
    print("")