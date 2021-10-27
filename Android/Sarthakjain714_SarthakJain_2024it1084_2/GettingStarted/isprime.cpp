#include <iostream>
using namespace std;

int main(){
    int t;
    cout<<"Enter the number of cases :";
    cin>>t;
    while(t!=0){
        int number;
        cout<<"Enter the number: ";
        cin>>number;
        int isprime =1;
        for(int i=2;i<=number/2;i++){
            if(number%i==0){
                isprime =2;
            }

        }
        if(number ==2 ||number ==3){
            cout<<"prime"<<endl;
            isprime =3;
        }
        else if(number==1){
            cout<<"neither prime nor composite"<<endl;
        }
        if(isprime==2){
            cout<<"not prime"<<endl;
        }
        else if(isprime==1) {
            cout<<"prime"<<endl; 
        }
        t--;
    }
}