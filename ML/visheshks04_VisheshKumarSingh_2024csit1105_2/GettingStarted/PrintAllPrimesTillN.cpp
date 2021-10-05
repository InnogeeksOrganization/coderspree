#include <iostream>
#include<cmath>
using namespace std;

bool is_prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;

    for(int i=low;i<=high;i++){
        if(is_prime(i))
            cout<<i<<endl;
    }
    
}
