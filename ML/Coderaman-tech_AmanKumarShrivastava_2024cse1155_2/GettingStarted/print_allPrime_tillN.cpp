#include <bits/stdc++.h>
using namespace std;


int check_prime(int(n)){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main(){
    int low, high;
    cin >> low >> high;
 
 for(int i=low;i<=high;i++){
     if(check_prime(i)){
         cout<<i<<"\n";
     }
 }
   return 0;
}