#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, rem, d;
    int count=0;
    cin>>num>>d;
    while(num!=0){
        rem=num%10;
        if(rem==d){
            count++;
        }
        num=num/10;
    }
    cout<<count<<endl;
}