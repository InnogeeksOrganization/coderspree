#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int ar[n];

    for(int i=0;i<n;i++)
        cin>>ar[i];

    int max=0, min=0;

    for(int i=1;i<n;i++){
        if(ar[i]<ar[min])
            min=i;
        if(ar[i]>ar[max])
            max=i;
    }

    cout<<ar[max]-ar[min];
    
}
