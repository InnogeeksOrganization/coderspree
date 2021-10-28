/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{int n,i,j;
cin>>n;
for(i=n;i>=1;i--)
{for(j=1;j<=i-1;j++)
    {cout<<"\t";}
    cout<<"*"<<endl;
}

    return 0;
}
