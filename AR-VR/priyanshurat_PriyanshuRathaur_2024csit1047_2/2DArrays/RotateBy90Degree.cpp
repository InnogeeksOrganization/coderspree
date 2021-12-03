/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
int a,i,j;
cin>>a;
int arr[a][a];
for(i=0;i<a;i++)
{for(j=0;j<a;j++)
    { cin>>arr[i][j];           }
}


for(j=0;j<a;j++)
{for(i=a-1;i>=0;i--)
    {      cout<<arr[i][j]<<" ";}   cout<<endl;
}



    return 0;
}
