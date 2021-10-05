for _ in range(int(input())):
    n = int(input())
    c = False
    if n> 1:    
        for i in range(2, n):
            if (n%i) == 0:
                c = True
                break
    if c or n==0:
        print("not prime")
    else:
        print("prime")