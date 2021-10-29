#include<iostream>
using namespace std;

int main()
{
    int n=5;
    for(int i=1;i<=5;i++)
    cout<<"*";
    cout<<endl;
    for(int i=1;i<=3;i++ )
     {
         for(int j=1;j<=5-i-1;j++)
         {cout<<" ";
         }
         cout<<"*";
         cout<<endl;
         
     }

    for(int i=1;i<=5;i++)
    cout<<"*";
    return 0;
}