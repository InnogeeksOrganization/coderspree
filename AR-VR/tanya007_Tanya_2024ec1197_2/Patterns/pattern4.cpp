#include<iostream>
using namespace std;

int main(){
    int n, i, j, k;
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=n;j>i;j--){
            cout << " ";
        }
        for(k=1;k<=i;k++){
        	cout << "*";          
        }
        cout <<endl;        
    }
}