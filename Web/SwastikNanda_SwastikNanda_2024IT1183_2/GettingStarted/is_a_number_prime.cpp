#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
   
   for(int i=1;i<=t;i++)
   {
     int n,l=0;
     cin>>n;
     for(int j=2;j<n;j++)
     {
         if(n%j==0){
            l++; 
         }
      }
      if(l==0){cout<<"prime"<<endl;}
      else{cout<<"not prime"<<endl;}
    
       
   }
   return 0;
    
}