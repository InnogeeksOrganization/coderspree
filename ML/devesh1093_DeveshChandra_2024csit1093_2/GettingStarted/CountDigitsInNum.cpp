#include <iostream>
using namespace std;

int main(){
    int n,count;
    cin >> n;
    
    if(n>=1 && n<10e9){
        while(n>0){
            
            n=n/10;
            count++;
        }
        cout<<count;
    }
    return 0;
}
