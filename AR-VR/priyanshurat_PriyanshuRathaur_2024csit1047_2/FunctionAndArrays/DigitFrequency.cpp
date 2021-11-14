/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int n,t,c=0,a,d;
   cin>>n>>t;
   
   a=n;
   
   while (a>0)
{d=a%10;
    a=a/10;
    if(d==t)
    {c++;}
}
   cout<<c;
   return 0;
    }

     

   

