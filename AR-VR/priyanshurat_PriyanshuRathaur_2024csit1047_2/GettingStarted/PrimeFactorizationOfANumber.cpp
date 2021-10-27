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
    int a,n,i;
    cin>>a;
    n=a;
    
for(i=2;i<=a/2;i++)
{while(n%i==0)
{n=n/i;
    cout<<i<<" ";
}}
   

    return 0;
}
