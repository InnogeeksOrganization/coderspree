#include<iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || j==n){
                cout<<"* ";
            }
            else if (j==i && j<=n/2+1){
                cout<<"* ";
            }
            else if(j>n/2+1 && j<n && ((j+i)==n+1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}