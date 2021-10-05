#include<iostream>
using namespace std;
int main(int argc, char** agrc){
    //write your code here
    
    for(int i=0;i<5;i++)
    {
        cout<<"*";
    }
    cout<<"\n";
     
     for (int i=1;i<=3;i++)
     {
         for(int j=1;j<=4;j++)
         {
             if(i+j==5)
             cout<<"*";
             else 
             cout<<" ";
         }
         cout<<"\n"; 
     }
         for(int i=0;i<5;i++)
    {
        cout<<"*";
    }
   
     return 0;
}