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
    int a,b,i,c=1;
    cin>>a>>b;
    
    for(i=2;i<=b/2;i++)
    {while (a%i==0 && b%i==0)
        {a=a/i;  b=b/i;
            c=c*i;
        }
    }
    
    cout<<c<<endl;
    
    cout<<c*a*b;
    return 0;
}
