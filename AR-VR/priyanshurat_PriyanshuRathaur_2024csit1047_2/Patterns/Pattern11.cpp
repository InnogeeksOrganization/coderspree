/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int t,i,j,c=1;
    cin>>t;
    for(i=1;i<=t;i++)
    {for(j=1;j<=i;j++)
        {cout<<c<<"\t";
            c++;
        }cout<<endl;
    }

    return 0;
}
