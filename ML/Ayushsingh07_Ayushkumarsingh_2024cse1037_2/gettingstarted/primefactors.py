import math
n=int(input())
while n%2==0:
    print(2,end=" ")
    n=n/2
for i in range(3,int(math.sqrt(n))+1,2):
    while (n % i == 0):
         print (int(i),end=" ")
         n = n / i
    
if n>2:
    print (int(n),end=" ")