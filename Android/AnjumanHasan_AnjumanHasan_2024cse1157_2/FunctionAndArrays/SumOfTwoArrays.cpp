#include<iostream>
using namespace std;

int main(){
    int n1, n2,diff;
    cin>>n1;
    int* a1 = new int[n1];
    for(int i = 0 ; i < n1; i++){
        cin>>a1[i];
    }
    
    cin>>n2;
    int* a2 = new int[n2];
    for(int i = 0 ; i < n2; i++){
        cin>>a2[i];
    }
    int a3[n1+n2];
    if(n1!=n2)
    {
        diff=abs(n1-n2);
    }
    if(n1>n2)
    {
        
    }
    
}