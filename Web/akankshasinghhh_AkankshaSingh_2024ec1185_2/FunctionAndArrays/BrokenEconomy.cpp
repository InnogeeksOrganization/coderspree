#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* a = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>a[i];
    }
    int data;
    cin>>data;
    int c,f;
    for(int i=0;i<n-1;i++)
    {
        if(data>a[i] && data<a[i+1])
        {
            c=a[i+1];
            f=a[i];
            printf("%d\n%d",c,f);
            break;
        }
        else if(data==a[i])
        {
            printf("%d",a[i]);
            break;
        }
    }
    
}