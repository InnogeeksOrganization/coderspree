a=int(input())
b=int(input())
c=1
for i in range(1,a+1):
    if a%i==0 and b%i==0:
        c=i
l=int(a*b/c)
print(c)
print(l)