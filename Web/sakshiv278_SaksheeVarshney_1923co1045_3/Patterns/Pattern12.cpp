#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,j;
    cin >> n;
    int a=0,b=1;
    for(int i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<a<<"	";
            int c=a+b;
            a=b;
            b=c;
        }
       cout<<endl; 
    }
}