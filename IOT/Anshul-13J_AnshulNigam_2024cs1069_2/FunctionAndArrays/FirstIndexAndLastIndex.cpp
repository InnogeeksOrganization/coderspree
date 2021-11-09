#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data,high,low,mid,hi=-1,li=-1;
    cin>>data;
    
    low=0;  high=n-1;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(arr[mid]>data)
            high=mid-1;
        else if(arr[mid]<data)
            low=mid+1;
        else
        {
            hi=mid;
            low=mid+1;
        }
    }
    low=0;  high=n-1;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(arr[mid]>data)
            high=mid-1;
        else if(arr[mid]<data)
            low=mid+1;
        else
        {
            li=mid;
            high=mid-1;
        }
    }
    cout<<li<<endl<<hi;
}