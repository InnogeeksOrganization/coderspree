#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,i,j;
    cin >> n;
    int sp=n/2,st=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=sp;j++){
            cout<<"	";
        }
        for(j=1;j<=st;j++){
            cout<<"*	";
        }
        if(i<=n/2){
            sp--;
            st+=2;
        }
        else{
            sp++;
            st-=2;
        }
         cout<<"
";
    }
   
    
}