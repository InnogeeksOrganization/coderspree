#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void primeFact(int m){
    while(m%2==0){
        cout<<2<<" ";
        m=m/2;
}
for(int i=3; i<=sqrt(m); i++){
        while(m%i==0){
            cout<<i<<" ";
            m=m/i;
    }
}
if(m>2)
cout<<m<<" ";
}

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    primeFact(n);
    return 0;
    
}