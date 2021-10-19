#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)
    { int flag=0;
        int n1;
        cin>>n1;
        for(int i=2;i<=sqrt(n1);i++)
        {
          if(n1%i==0)
          {
              flag=1;
              cout<<"not prime";
              break;

          }
        }
        if(flag==0)
        {
            cout<<"prime";
        }
        cout<<endl;
        n--;
    }
}