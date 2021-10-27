#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    for(int i=1;i<=n/2+1;i++){
        for(int j=n/2+1-i;j>0;j--){
            cout<<"\t";
        }
        int count = i;
        for(int j=0;j<i;j++){
            cout<<count<<"\t";
            count++;
        }
        
        count = 2*(i-1);
        for(int j=1;j<i;j++){
            cout<<count<<"\t";
            count--;
        }
        cout<<endl;
    }
    
    for(int i=n/2;i>=1;i--){
        for(int j=n/2+1-i;j>0;j--){
            cout<<"\t";
        }
        
        int count = i;
        for(int j=0;j<i;j++){
            cout<<count<<"\t";
            count++;
        }
        
        count = 2*(i-1);
        for(int j=1;j<i;j++){
            cout<<count<<"\t";
            count--;
        }
        
        cout<<endl;
    }
}
