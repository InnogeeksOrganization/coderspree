/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    int a,n,i,j,c=0;
    cin>>a;
    int arr[a][a];
    for(i=0;i<a;i++)
    {for(j=0;j<a;j++)
        {cin>>arr[i][j];}
    }
    
    cin>>n;
    for(i=0;i<a;i++)
    {for(j=0;j<a;j++)
        {if(arr[i][j]==n)
            {cout<<i<<endl<<j;
                c=1;
            }
        }
    }
    if(c==0)
    {cout<<"Not Found";}

    return 0;
}
