#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t,temp;
    cin >> n;
    int count=0;
    temp=n;
    while(temp>=1){
        temp=temp/10;
        count++;
    }
    
    int num=pow(10,count-1);
    while(num!=0){
           t=n/num;
           cout<<t<<endl;
            n=n%num;
            num=num/10;
           
    }

    //write your code here
    
}
