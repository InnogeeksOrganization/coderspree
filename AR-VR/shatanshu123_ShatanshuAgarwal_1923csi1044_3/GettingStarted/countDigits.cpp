#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,c=0;
    cin >> n;
    while(n!=0){
        n=n/10;
        c++;
    }
    cout<<c;
    
   
    
}