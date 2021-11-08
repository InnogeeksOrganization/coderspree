#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    for(int i=1;i<=number;i++){
        for(int j=0;j<number;j++){
            if(j<number-i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
            
        }
        cout<<endl;
    }
}