#include<iostream>
using namespace std;
int main()
{
    int i,j,k,s=1;
    for(i=1;i<=5;i++)
    {
       cout<<"*";
    }
    cout<<"\n";
     for(j=1;j<=3;j++)
        { for(k=3;k>=s;k--)
          {
            cout<<" ";
          }
          cout<<"*";
          s++;
    cout<<"\n";
}
     for(i=1;i<=5;i++)
    {
       cout<<"*";
    }   
        return 0;
}