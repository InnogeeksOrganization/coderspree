#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int number_to_be_searched;
    cin>>number_to_be_searched;
    for(int i=0;i<n;i++){
        if(arr[i]==number_to_be_searched){
            cout<<i;
            break;
        }
    }
}