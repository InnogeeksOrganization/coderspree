
a=[]
b=[]

for _ in range(int(input())):
    a.append(int(input()))
for _ in range (int(input())):
    b.append(int(input()))
a1=a.copy()
b1=b.copy()
l= len(a)-(len(b) - 1)

for j in range(len(a), 0, -1):

        if j-l < 0:
            break
        else:
            a[j-1] = a[j-1] + b[j-l]
if len(a1)>len(b1):
    print (b1[0])
else:
    print(a1[0])
for i in a:
    print(i)
    #trash
    