#include <iostream>
using namespace std;

int main(){
    int n,rem;
    cin >> n;
    if(n>=1 &&n< 10e9)
  { while(n>0){
    rem=n%10;
    cout<<rem<<'\n';
    n=n/10;
} }
    return 0;
}
