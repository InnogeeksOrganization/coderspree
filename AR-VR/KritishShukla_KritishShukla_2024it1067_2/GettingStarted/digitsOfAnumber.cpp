#include <iostream>

using namespace std;

int main()
{
   int t,k=1,a,i,j;
   cin>>t;
   int c[11];
   a=t;
   while (a>0)
   {c[k]=a%10;
       a=a/10;
       k++;
   }
   k=k-1;
   for(i=k;i>=1;i--)
   {cout<<c[i]<<endl;}
   
   
       return 0;
}