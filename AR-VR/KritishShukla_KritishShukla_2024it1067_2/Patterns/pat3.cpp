#include <iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
   { 
        for(j=i;j<5;j++)
    { 
           cout<<" ";
    }
    for(k=1;k<=i;k++)
    {
         cout<<"*";
    }
      cout<<"\n";
   }
    return 0;
}