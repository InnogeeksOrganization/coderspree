#include <iostream>
using namespace std;

void sum(int x){
   if(x>=10)
      sum(x/10);
      
      int digit=x%10;
      cout<<digit<<" ";
   
    }

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
   sum(n);
    return 0;
    
}