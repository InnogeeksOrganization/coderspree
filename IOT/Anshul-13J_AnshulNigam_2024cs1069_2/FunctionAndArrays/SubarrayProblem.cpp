#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int i,j,k=1,t;
    for(i=0;i<n;i++)
    {
       for(j=i;j<n;j++)
       {
           for(k=i;k<=j;k++)
           {
               cout<<arr[k]<<"\t";
           }
           cout<<endl;
       }
    }
    
}