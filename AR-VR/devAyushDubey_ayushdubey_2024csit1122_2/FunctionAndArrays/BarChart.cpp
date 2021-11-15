#include<iostream>
using namespace std;


int main(){
    int n,i,j;
    cin>>n;
    int bar[n],max=0;
    
    for(i=0;i<n;i++){
        cin>>bar[i];
        if(bar[i]>max)
            max=bar[i];
    }
    
    int graph[n][max];
    
    for(i=0;i<n;i++){
        for(j=0;j<max;j++)
            graph[i][j]=-1;
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<bar[i];j++)
            graph[i][j]=0;
    }
    
    for(i=max-1;i>=0;i--){
        for(j=0;j<n;j++){
            if(graph[j][i]==0)
                cout<<"*	";
            else
                cout<<"	";
        }
        cout<<endl;
    }
    //write your code here
    
    
}