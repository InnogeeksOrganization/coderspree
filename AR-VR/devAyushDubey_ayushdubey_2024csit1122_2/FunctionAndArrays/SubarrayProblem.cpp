#include<iostream>
using namespace std;


int main(){
    int n,i,j,k;
    cin>>n;
    int* arr = new int[n];
    for(i = 0 ; i < n; i++)
        cin>>arr[i];
    i=0;
    while(i<n){
        for(k=i;k<n;k++){
            for(j=i;j<=k;j++)
                cout<<arr[j]<<"	";
            cout<<endl;
        }
        i++;
    }

    
    // write your code here
    
}