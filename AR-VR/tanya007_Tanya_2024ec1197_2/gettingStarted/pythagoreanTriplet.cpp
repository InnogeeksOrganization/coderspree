#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, maxnum;
    cin>>a>>b>>c;
    maxnum=max(a, b);
    maxnum=max(maxnum, c);
    if(maxnum==a){
        if(a*a==b*b+c*c){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }
    else if(maxnum==b){
        if(b*b==a*a+c*c){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }
    else if(maxnum==c){
        if(c*c==a*a+b*b){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }
    else{
        cout<<"false"<<endl;
    }
}