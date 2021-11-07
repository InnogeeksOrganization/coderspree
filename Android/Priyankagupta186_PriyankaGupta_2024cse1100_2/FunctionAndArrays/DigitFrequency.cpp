#include<iostream>
using namespace std;
int main()
{
    int n,d,count=0;
    cin>>n>>d;
    while(n>0)
    { int s;
         s=n%10;
         if(s==d)
         {
             count++;
         }
         n=n/10;
    }
    cout<<count;
}