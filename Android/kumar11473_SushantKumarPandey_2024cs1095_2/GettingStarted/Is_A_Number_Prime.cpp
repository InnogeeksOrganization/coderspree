
#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
   while(t--){
       int n,i,count=0;
       cin>>n;
       for(i=2;i<=n/2;i++)
       {
           if(n%i==0)
           count++;
       }
       if(count==0)
         cout<<"prime"<<endl;
         else
         cout<<"not prime"<<endl;   
   }
    return 0;
}