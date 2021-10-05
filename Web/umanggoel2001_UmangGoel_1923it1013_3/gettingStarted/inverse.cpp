#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int iv=0;
    int op=1;
    while(n!=0){
        int od=n%10;
        int ip=od;
        int id=op;
        
        //inverse it
        
        iv=iv+id*pow(10,ip-1);
        
        
        n=n/10;
        op++;
        
        
    }
    cout<<iv;
}