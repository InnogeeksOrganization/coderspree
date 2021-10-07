#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
   
   int a=0;
   while(n>0){
       a=a+1;
       n=n/10;
   }
   cout<<a;
   return 0;
}