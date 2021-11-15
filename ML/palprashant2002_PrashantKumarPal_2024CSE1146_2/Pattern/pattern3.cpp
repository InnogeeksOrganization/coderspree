#include<iostream>
using namespace std;
int main()
{
    char s1='*',s2=' ';
    int i,j,n;
    cin>>n;
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            cout<<s1;
        }
        cout<<'\n';
    }
    return 0;
}