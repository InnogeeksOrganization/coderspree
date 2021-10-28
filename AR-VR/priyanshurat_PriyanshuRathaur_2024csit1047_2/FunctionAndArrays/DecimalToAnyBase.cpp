/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int n,f=1,b,i,arr[30];
   cin>>n>>b;
   while (n>0)
   {arr[f]=n%b;
   n=n/b;
       f++;
   }
   for(i=f-1;i>=1;i--)
   {cout<<arr[i];}
   
    return 0;}

     

   

