#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, rem;
    int count=0;
    cin>>num;
    while(num!=0){
        rem=num%10;
        count+=1;
        num=num/10;
    }
    cout<<count;
}
