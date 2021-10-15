#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
   for(int i=1;i<=t;i++)
   {
       int n;
       cin>>n;
       int c=0;
       for(int j=1;j<=n/2;j++)
       {
           if(n%j==0)
           c++;
       }
       if(c<=1)
       cout<<"prime\n";
       else
       cout<<"not prime\n";
   }
   
}