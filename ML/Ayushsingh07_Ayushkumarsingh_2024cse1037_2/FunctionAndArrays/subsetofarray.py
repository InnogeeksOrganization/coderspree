def sub(l):
    lists = [[]]
    for i in range(len(l) + 1):
        for j in range(i):
            lists.append(l[j: i])
    return lists
 
# driver code
a=[]
for i in range (int(input())):
    a.append(int(input()))
print(sub(a))