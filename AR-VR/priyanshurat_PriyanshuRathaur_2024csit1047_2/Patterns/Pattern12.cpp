/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int t,a=1,b=1,i,j,c;
    cin>>t;
    
    if (t>2)
    {cout<<"0"<<endl;
    cout<<"1"<<"\t"<<"1"<<endl;
    for(i=3;i<=t;i++)
    {for(j=1;j<=i;j++)
        {c=a+b;
            a=b;
            b=c;
            cout<<c<<"\t";
        }cout<<endl;
    }}
    
    
    else if (t==1)
     {cout<<"0"<<endl;}
     
     else{cout<<"0"<<endl;
    cout<<"1"<<"\t"<<"1"<<endl;}
    return 0;
}
