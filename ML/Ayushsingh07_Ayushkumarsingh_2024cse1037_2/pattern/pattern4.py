a=int(input())
i = a
while i >= 1:
    j =a
    while j > i:
        # display space
        print('', end='\t')
        j -= 1
    k = 1
    while k <= i:
        print('*\t', end=' ')
        k += 1
    print()
    i -= 1