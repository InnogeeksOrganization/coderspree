#include<iostream>
using namespace std;
int main()
{
    int t,d,n,i;
    cin>>t;
    for(i=0;i<t;i++)
    {cin>>n;
        d=2;
    while(d*d<=n)
    {
        
        if(n%d==0)
        {
            break;
        }
        d++;
    }
    if(d*d>n)
    {
        cout<<"prime\n";
    }
    else
    {
        cout<<"not prime\n";
    }
    }
}