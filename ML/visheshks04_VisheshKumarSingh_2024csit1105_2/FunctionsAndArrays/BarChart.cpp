#include<iostream>
using namespace std;


int main(){
    
    int n;
    cin>>n;

    int ar[n];
    int max=0;

    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]>max)
            max=ar[i];
    }

    for(int i=max;i>0;i--){
        for(int j=0;j<n;j++){
            if(ar[j]>=i)
                cout<<"*\t";
            else
                cout<<"\t";
        }
        cout<<endl;
    }
    
    
}
