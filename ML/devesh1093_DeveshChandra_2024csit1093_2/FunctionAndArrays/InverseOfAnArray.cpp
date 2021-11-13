#include<iostream>
using namespace std;

int* inverse(int* arr, int n){
    int iarr[n];

    for(int i=0;i<n;i++){
        iarr[arr[i]] = i;
    }

    for(int i=0;i<n;i++){
        arr[i] = iarr[i];
    }

    return arr;
}
void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<endl;
    }
    cout<<'\n';
}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }

    int* res = inverse(arr,n);
    display(res,n);

}
