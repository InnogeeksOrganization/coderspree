#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
   //write your code here
   int i, j;
   for(i=1; i<=n; i++)
   {
       for(j=1; j<=i; j++)
       {
           cout<<"*\t";
       }
       cout<<"\n";
   }
}