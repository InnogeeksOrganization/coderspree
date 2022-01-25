/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b,i,j;
    cin>>a>>b;
     long long arr[a][b];
    for(i=0;i<a;i++)
    {for(j=0;j<b;j++)
        {cin>>arr[i][j];}
    }
     
     for(j=0;j<b;j++)
     {if(j%2==0)
         { for(i=0;i<a;i++)
         {cout<<arr[i][j]<<endl;}}
         
        else{  for(i=a-1;i>=0;i--)
            {cout<<arr[i][j]<<endl;}
        } 
     }





    return 0;
}
