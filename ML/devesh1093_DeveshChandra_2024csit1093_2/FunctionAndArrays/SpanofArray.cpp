#include<iostream>
using namespace std;

int span_array(int ar[], int n){
    int max, min;
    max=ar[0];
    min=ar[0];
for(int i=1; i<n; i++){
    if(max<ar[i])
     max=ar[i];
    
    if(min>ar[i])
        min=ar[i];
    
    
}
    return max-min;
}

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    int span=span_array(ar, n);
    cout<<span;
    
    return 0;
    
}
