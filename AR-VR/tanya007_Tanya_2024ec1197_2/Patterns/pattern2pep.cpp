#include<iostream>
using namespace std;
int main(){
    int r;
    cin>>r;
    for(int i=r;i>=1;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}