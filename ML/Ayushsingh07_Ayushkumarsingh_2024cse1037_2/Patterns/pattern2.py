a = int(input(""))  
  
for i in range(a + 1, 0, -1):    
    for j in range(0, i - 1):  
        print("*  ", end='')  
    print("")