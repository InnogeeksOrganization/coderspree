#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int isp=-1, osp=n/2;
    for(int j=1;j<=n;j++){
    for(int i=1;i<=osp;i++){
        cout<<"	";
    }
    cout<<"*	";
    for(int i=1;i<=isp;i++){
        cout<<"	";
    }
    if(j>1 && j<n){
       cout<<"*	"; 
    }
    if(j<=n/2){
        isp+=2;
        osp--;
    }
    else{
        isp-=2;
        osp++;
    }
      cout<<endl;
    }
    
}