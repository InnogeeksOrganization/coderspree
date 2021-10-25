#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int dig=0;
   while(n != 0){
       n=n/10;
       dig++;
   }
   cout<<dig; 
}