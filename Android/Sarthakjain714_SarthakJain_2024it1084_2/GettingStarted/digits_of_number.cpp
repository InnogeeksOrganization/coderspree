#include<iostream>
using namespace std;
#include<vector>

int main(){
    long int number;
    cin>>number;
    while(number!=0){
        int remainder=number%10;
        number=number/10;
        cout<<remainder;
    
    }
    
}