#include <iostream>
using namespace std;

void reset(bool arr[],int n){
    for(int i=0 ; i<n ; i++)
        arr[i] = false;
}

int main(){
    int n,i,j,k,l;
    cin >> n;
    bool arr[n];
    int mid = n/2;
    for(i=0 ; i<=n/2 ; i++){
        j=0;
        reset(arr,n);
        arr[k=mid-i] = true;
        arr[l=mid+i] = true;
        while(j<n){
            if(arr[j] == true)
                cout<<"*\t";
            else
                cout<<"\t";
            j++;
        }
        cout<<endl;
    }
    for(i=0 ; i<n/2 ; i++){
        j=0;
        reset(arr,n);
        arr[++k] = true;
        arr[--l] = true;
        while(j<n){
            if(arr[j] == true)
                cout<<"*\t";
            else
                cout<<"\t";
            j++;
        }
        cout<<endl;
    }
    //write your code here
    
}