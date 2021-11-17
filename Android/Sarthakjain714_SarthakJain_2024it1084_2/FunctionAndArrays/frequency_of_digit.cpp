#include<iostream>
using namespace std;

int frequency(int n,int digit){
    int remainder;
    int count=0;
    while(n!=0){
        remainder= n%10;
        if(remainder==digit){
            count++;
        }
        n=n/10;
    }
    return count;
}
int main(){
    int number;
    cin>>number;
    int digit;
    cin>> digit;
    cout<<frequency(number, digit);
}