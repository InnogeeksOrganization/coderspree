/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int t,a,i,d;
cin>>t;
for(i=0;i<t;i++)
{cin>>a;
int z=0;
d=a-1;
    while (d>1)
    {if(a%d==0)
        {z++;}
        d=d-1;
    }
    
    if (z>0)
    {cout<<"not prime"<<endl;}
    
    else {cout<<"prime"<<endl;
}}

    return 0;
}
