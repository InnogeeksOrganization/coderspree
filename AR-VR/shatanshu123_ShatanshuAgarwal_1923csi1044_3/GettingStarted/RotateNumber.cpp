#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int temp = n;
    int digits = 0;
    while(temp != 0){
        temp /= 10;
        digits++;
    }
    k = k % digits;
    if(k < 0){
        k += digits;
    }
    int div = (int)(pow(10,k));
    int multiplier = (int)(pow(10,digits - k));
    int fh = n / div;
    int sh = n % div;
    int rot = sh * multiplier + fh;
    cout<<rot;
    return 0;
}

