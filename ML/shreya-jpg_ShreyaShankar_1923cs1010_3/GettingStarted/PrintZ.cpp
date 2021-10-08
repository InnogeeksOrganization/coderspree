#include<iostream>
using namespace std;
int main(int argc, char** agrc){
    for(int i=1; i<=5; i++){
        for(int j=5; j>=1; j--){
            if(i==1 || i==5 || i==j)
                cout<<"*";
            else
                cout<<" ";

        }
        cout<<endl;
    }

}
