import math
low=int(input())  
high=int(input())  
  
for num in range(low,high+1):  
   if num==1:
       print(num)
   if num > 1:
        for i in range(2,int(math.sqrt(num)+1)):  
            if (num % i)==0:  
                break  
        else:  
            print(num) 