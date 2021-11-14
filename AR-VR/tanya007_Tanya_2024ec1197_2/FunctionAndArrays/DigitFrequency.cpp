#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, digit;
    cin>>num;
    int count=0;
    int key;
    cin>>key;
    while(num!=0){
        digit=num%10;
        if(digit==key){
            count++;
        }
        num=num/10;
    }
    cout<<count<<endl;
}