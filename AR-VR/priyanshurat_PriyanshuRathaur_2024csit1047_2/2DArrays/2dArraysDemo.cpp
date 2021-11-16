/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
int a,b,i,j;
cin>>a>>b;
int arr[a*b];
for(i=0;i<a*b;i++)
{cin>>arr[i];}
int m=0;
for(i=0;i<a;i++)
{for(j=0;j<b;j++)
    {  cout<<arr[m]<<" " ;
    m++;}cout<<endl;
}


    return 0;
}
