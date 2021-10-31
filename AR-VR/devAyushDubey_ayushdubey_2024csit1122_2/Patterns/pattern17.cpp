#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n,i,j;
    cin >> n;
    for(i=0;i<n;i++){
        if(i<n/2){
            for(j=0;j<n/2;j++)
                cout<<"	";
            for(j=0;j<=i;j++)
                cout<<"*	";
        }
        else if(i==n/2){
            for(j=0;j<n;j++)
                cout<<"*	";
        }
        else{
            for(j=0;j<n/2;j++)
                cout<<"	";
            for(j=0;j<n-i;j++)
                cout<<"*	";
        }
        cout<<endl;
    }
    //write your code here
    
}