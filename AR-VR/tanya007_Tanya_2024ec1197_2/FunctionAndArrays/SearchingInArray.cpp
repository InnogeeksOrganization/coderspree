#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int size, int key){
    int s=0, e=size-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}


int main(){
    int size, key;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    cout<<binarysearch(arr, size, key)<<endl;
}