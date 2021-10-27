#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int count=0;
    while(n!=0){
        n=n/10;
        ++count;
    }
 cout<<count;
    return 0;
}