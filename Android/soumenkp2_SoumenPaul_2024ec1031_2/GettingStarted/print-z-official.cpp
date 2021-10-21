#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** agrc){
  
  for(int i=0;i<5;i++)
  {
      cout<<"*";
  }
  
  cout<<endl;
  int flag = 3;
  
  for(int i=0;i<3;i++)
  {
      for(int j=0;j<5;j++)
      {
          if(flag==j)
          {
              cout<<"*";
          }
          else
          {
              cout<<" ";
          }
      }
      
      cout<<endl;
      flag--;
     
  }
  
  for(int i=0;i<5;i++)
  {
      cout<<"*";
  }
  

}
