#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n,j=0,k=1,sum;
    cin >> n;
    cout<<"0\n1\n";
    sum=0;
    for(int i=1;i<=n-2;i++)
    {
      sum=j+k;
      j=k;
      k=sum;
      cout<<sum<<"\n";
    }
    
}