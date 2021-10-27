import itertools
for _ in range(int(input())):
    d=int(input())
    l=list(map(int,input().split(" ")))
    result = []
    for permutation in itertools.permutations(str(l) for l in l):
        result.append(''.join(permutation))
        maximum = max(result, key=int)
    print(int(maximum))