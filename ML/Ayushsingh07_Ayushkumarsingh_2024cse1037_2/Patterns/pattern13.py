def tri(size):
    for i in range(0, size):
        for j in range(0, i + 1):
            print(nam(i, j), end="\t")
        print()


def nam(n, k):
    num = 1
    if k > n - k:
        k = n - k
    for i in range(0, k):
        num = num * (n - i)
        num = num // (i + 1)
    return num


a=int(input())
tri(a)