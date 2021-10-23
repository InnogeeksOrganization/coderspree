/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int n,f=1,b,i,arr[30],sum=0,j=0;
   cin>>n>>b;
   while (n>0)
   {arr[f]=n%10;
   n=n/10;
       f++;
   }
   for(i=1;i<f;i++)
   {sum=sum+(arr[i]*pow(b,j));
       j++;
   }
   cout<<sum;
    return 0;}

     

   

