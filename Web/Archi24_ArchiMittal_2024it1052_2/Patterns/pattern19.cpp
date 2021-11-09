#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
 {
  int c,r,no;
  start:
    {         

  
  cin>>no;

   if(no%2==0)
      c=no+1;
   else 
      c=no;

  if(no>23 || no<3) 
      exit(0);  

  for(int i=0; i<c; i++)
   {
      r=c;
      for(int j=0; j<r; j++)
       {
         int s=r-1,m=r/2-1;
         if(i==0)
          {
                 
            int x=r/2;
            if(j<=x)  
                 cout<<"*";  
            if(j>=x && j!=s && j!=r/2)  
                 cout<<" ";   
            if(j==s)  
                 cout<<"*";
      

          }

         if(i!=0 && i<r/2 )
          {
            
            if(j==s/2) 
                cout<<"*";   
           if(j==s) 
                cout<<"*";    
           if(j!=s/2 && j!=s) 
                cout<<" ";
           
          }


        if(i==c/2)
             cout<<"*"<<" ";
               

        
        if(i>r/2 && i<s)
          {
           
           if(j==0)  
                cout<<"*";  
           if(j==(r/2+1)) 
                cout<<"*"; 
           if(j!=0 && j!=m) 
                cout<<" ";
            
          }

       if(i==s)
        {
          if(j==0)  
             cout<<"*";  
          if(j>m)  
             cout<<"*";
          if(j!=0 && j<=m) 
             cout<<" ";  
          
         }
     }
     cout<<"\n";
   }
return 0; 
  }
  goto start;
}