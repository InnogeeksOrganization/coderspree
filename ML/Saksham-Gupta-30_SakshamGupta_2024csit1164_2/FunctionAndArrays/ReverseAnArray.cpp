#include<iostream>
using namespace std;

void rotate(int* arr, int n, int k)
{
    int* newarr = new int[n];
    int j;
    if (k >= 0)
    {
        k = k % n;
        j = 0;
        for (int i = n - k; i < n; i++)
        {
            newarr[j] = arr[i];
            j++;
        }
        for (int i = 0; i < k - 1; i++)
        {
            newarr[j] = arr[i];
            j++;
        }
    }
    else
    {
        k = -1 * (k % n);
        j = 0;
        for (int i = k; i < n; i++)
        {
            newarr[j] = arr[i];
            j++;
        }
        for (int i = 0; i < k; i++)
        {
            newarr[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = newarr[i];
    }
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, r;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    cin>>r;
    
    rotate(arr,n,r);
    display(arr,n);
}