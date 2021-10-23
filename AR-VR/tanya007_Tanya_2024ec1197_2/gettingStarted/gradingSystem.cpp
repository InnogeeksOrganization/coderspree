#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>90){
        cout<<"excellent";
    }
    else if(n>80 & n<=90){
        cout<<"good";
    }
    else if(n>70 & n<=80){
        cout<<"fair";
    }
    else if(n>60 & n<=70){
        cout<<"meets expectations";
    }
    else{
        cout<<"below par";
    }
}