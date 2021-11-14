#include <iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    while(n)
    {
        f*=n;
        n--;
    }
    return f;
}
int nCr(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

int main(int argc, char **argv){
    int n,i,j,k=1;
    cin >> n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<(i+1);j++)
        {
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
    
}