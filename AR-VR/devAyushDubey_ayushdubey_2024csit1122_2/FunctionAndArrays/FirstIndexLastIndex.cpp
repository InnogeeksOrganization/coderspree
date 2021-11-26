#include<iostream>
using namespace std;

int main(){
    int n,ans=-1,i;
    cin>>n;
    bool flag=true;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data;
    cin>>data;
    for(i=0;i<n;i++){
        if(data==arr[i] && flag==true){
            cout<<i<<endl;
            flag=false;
        }
        if(data==arr[i])
            ans = i;
    }
    if(flag==true)
        cout<<-1<<endl;
    cout<<ans<<endl;
    // write your code here
    
    
}