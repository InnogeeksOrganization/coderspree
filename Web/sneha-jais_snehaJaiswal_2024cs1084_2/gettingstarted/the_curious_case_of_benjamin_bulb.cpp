#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    //main logic is we need to find every perfect square number which are less than n
    
   for(int i=1;(i*i)<=n;i++)
   cout<<(i*i)<<endl;
   return 0;
}