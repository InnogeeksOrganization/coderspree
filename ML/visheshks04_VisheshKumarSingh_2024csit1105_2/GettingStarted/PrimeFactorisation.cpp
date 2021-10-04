#include <iostream>
#include<cmath>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    for(int i=2;i<sqrt(n);i++){

        while(n%i == 0){
            cout<<i<<" ";
            n/=i;
        }
    }
    
    if(n>2)
        cout<<n;

}

