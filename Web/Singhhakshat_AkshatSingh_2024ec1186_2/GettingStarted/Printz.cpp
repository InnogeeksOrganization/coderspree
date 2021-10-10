#include<iostream>
using namespace std;
int main(int argc, char** agrc){
    for(int j=5;j>0;j--)
    {
        if(j==1 || j==5){
            for(int i=1;i<=5;i++){
            cout<<"*";
            }
            cout<<"\n";
        }
        else{
            for(int k=1;k<=5;k++){
                if(k!=j)
                cout<<" ";
                else
                cout<<"*";
            }
            cout<<"\n";
        }
    }
}