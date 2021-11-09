#include<iostream>
using namespace std;

int main(){
    int low;
    cin>>low;
    int high;
    cin>>high;
    for(int j=low;j<=high;j++){
        int isprime =1;
        for(int i=2;i<=j/2;i++){
            if(j%i==0){
                isprime =2;
            }
        }
        // if(j ==2 ||j ==3){
        //     isprime =1;
        // }
        if(j==1){
            isprime=3;
        }
        
        else if(isprime==1) {
            cout<<j<<endl;
        }
    }
}