s=""  
for i in range(0,5):    
    for j in range(0,5):     
        if (((i== 0 or i == 4) and j >= 0 and j<= 4) or i+j==4):  
            s=s+"*"    
        else:      
            s=s+" "    
    s=s+"\n"    
print(s)
