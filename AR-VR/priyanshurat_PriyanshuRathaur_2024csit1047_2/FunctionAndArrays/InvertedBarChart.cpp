/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  int i,t,a=0,j,k;
  cin>>t;
  int arr[t];
  
  for(i=1;i<=t;i++)
{cin>>arr[i];
    if(a<arr[i])
   {a=arr[i];}
}

for(j=1;j<=a;j++)
{for(k=1;k<=t;k++)
    {if(j<=arr[k])
        {cout<<"*\t";}
    else {cout<<"\t";}}
cout<<"\n";}
    return 0;
}

