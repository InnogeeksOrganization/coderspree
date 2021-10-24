#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,i,j,k;
    cin >> n;
for(i=1;i<=(n+1)/2;i++)
{
    for(j=i;j<(n+1)/2;j++)
    {
        cout<<"\t";
    }
    for(k=1;k<(i*2);k++)
    {
        cout<<"*\t";
    }
    cout<<"\n";
}
for(i=(n-1)/2;i>=1;i--)
{
    for(j=(n+1)/2;j>i;j--)
    {
        cout<<"\t";
    }
    for(k=1;k<(i*2);k++)
    {
        cout<<"*\t";
    }
    cout<<"\n";
}
}