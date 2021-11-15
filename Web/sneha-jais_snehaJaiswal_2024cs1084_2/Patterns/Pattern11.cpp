#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int k=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
         cout<<k<<"\t";
         k++;
        }
        cout<<endl;
    }
    return 0;
}