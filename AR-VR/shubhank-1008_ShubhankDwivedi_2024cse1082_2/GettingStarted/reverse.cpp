
#include <iostream>

using namespace std;

int main()
{
   int t,p=1,a,i,j;
   cin>>t;
   int c[11];
   a=t;
   while (a>0)
   {c[p]=a%10;
       a=a/10;
       p++;
   }
   p=p-1;
   for(i=1;i<=p;i++)
   {cout<<c[i]<<endl;}


       return 0;
}

