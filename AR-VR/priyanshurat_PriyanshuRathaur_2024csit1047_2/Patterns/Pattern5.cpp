/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    
    for(i=1;i<=n/2;i++)
    {for(j=1;j<=n/2-i+1;j++)
    {cout<<"\t";}
        
        for(j=1;j<=i*2-1;j++)
        {cout<<"*\t";}
    cout<<endl;}
    
    for(i=1;i<=n;i++)
    {cout<<"*\t";}cout<<endl;
    
    for(i=n/2;i>=1;i--)
    {for(j=n/2-i+1;j>=1;j--)
    {cout<<"\t";}
        
        for(j=i*2-1;j>=1;j--)
        {cout<<"*\t";}
    cout<<endl;}
    

    return 0;
}
