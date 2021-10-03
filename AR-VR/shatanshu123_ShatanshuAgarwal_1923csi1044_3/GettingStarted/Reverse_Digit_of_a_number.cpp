#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,num;
    cin >> n;
    while(n!=0){
        num=n%10;
        n=n/10;
        cout<<num<<endl;
    }

   
}