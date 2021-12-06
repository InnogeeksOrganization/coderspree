#include <iostream>
#include<cmath>

using namespace std;

int len(int n){
    int l = 0;
    while (n){
        l++;
        n/=10;
    }
    return l;
}
int main(){
    int n,k;
    cin>>n>>k;
    int ans = 0;
    bool neg = false;
    int p = 1;
    if (k<0){
        k = -k;
        neg = true;}
    k = k%len(n);
    if (neg){
        string a = to_string(n);
        while(k--){
            a += a[0];
            a = a.substr(1);
        }
        cout << a;
    }
    else{
        while (k--){
            ans += (n%10)*p;
            n /= 10;
            p *= 10;
        }
        cout << ans << n;
    }
}