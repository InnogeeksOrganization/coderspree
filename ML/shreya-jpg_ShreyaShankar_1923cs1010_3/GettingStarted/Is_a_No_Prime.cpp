#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t,n,flag=0;
    cin>>t;

    while(t){
        cin>>n;
        for(int i=2; i<=n/2; i++){
            if(n%i==0){
               cout<<"not prime"<<endl;
               flag=1;
               break;
            }

        }
        if(flag==0)
            cout<<"prime"<<endl;
        flag=0;
        t--;
    }

}
