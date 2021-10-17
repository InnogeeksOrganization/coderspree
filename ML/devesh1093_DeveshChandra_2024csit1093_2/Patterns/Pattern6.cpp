#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x=1;
    for (int i=(n+1)/2; i>0; i--){
        for(int j=i; j>0; j--){
            cout<<"*\t";
        }
        for(int k=1; k<=x; k++){
            cout<<"\t";
        }
        x=x+2;
        for(int j=i; j>0; j--){
            cout<<"*\t";
        }
        cout<<endl;
    } 
     x=n-2;
    for (int i=1;i<(n+1)/2;i++){
        for(int j=0;j<=i;j++){
            cout<<"*\t";
        }
         for(int k=x; k>0; k--){
            cout<<"\t";
        }
        x=x-2;
       for(int j=0;j<=i;j++){
            cout<<"*\t";
        }
        cout<<endl;
    } 
return 0;
}
