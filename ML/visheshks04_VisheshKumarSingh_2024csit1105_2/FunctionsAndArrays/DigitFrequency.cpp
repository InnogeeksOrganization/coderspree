#include<iostream>

using namespace std;

int count_dig(int d, int n){
    int count = 0;
    while(n>0){
        int dig = n%10;
        if(dig == d)
            count++;
        n/=10;
    }
    
    return count;
}

int main(){
    int n, d;
    cin>>n>>d;
    
    cout<<count_dig(d,n);
    return 0;
}
