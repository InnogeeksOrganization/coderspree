#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int low,high;
    cin>>low>>high;
    for(int j=((low<high)?low:high);j<=((low>high)?low:high);j++)
    {
        int flag=0;
        
        for(int i=2;i<=sqrt(j);i++)
        {
          if(j%i==0)
          {
              flag=1;
             // cout<<j;
             // cout<<"is not prime";
              break;

          }
        }
        if(flag==0)
        {cout<<j<<endl;
          //  cout<<"is prime";
        }
       // cout<<endl;
    }
}