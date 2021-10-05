#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<6;i++)
    {
       for(int j=1;j<6;j++)
       {
           if((i==1)||(i==5))
           {
               cout<<"*";
           }
            else if(j==(5-(i-1)))
           {
              cout<<"*";
              
           }
           
           else
           cout<<" ";
           
       }
         
       cout<<endl;

    }
}