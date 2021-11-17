#include<iostream>
using namespace std;

int main(){
    int n,i,num;
    cin>>n;
    int max = 0, min;
    for(i=0;i<n;i++){
        cin>>num;
        if(num>max)
            max=num;
        if(i==0)
            min=num;
        else if(num<min)
            min=num;
    }
    cout<<max-min<<endl;
    //write your code here
    
}