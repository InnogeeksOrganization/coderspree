#include<iostream>
using namespace std;


int main() {
    int i,n,t,j,max=0;
    cin>>n;
    char arr[n][10];
    for(i=0;i<n;i++){
        for(j=0;j<10;j++)
            arr[i][j]='	';
    }
    for(i=0;i<n;i++){
        cin>>t;
        if(t>max)
            max=t;
        for(j=0;j<t;j++)
            arr[i][j]='*';
    }
    for(i=0;i<max;i++){
        for(j=0;j<n;j++){
            if(arr[j][i]=='*')
                cout<<arr[j][i]<<"	";
            else
                cout<<arr[j][i];
        }
        cout<<endl;
    }
  //write your code here


}