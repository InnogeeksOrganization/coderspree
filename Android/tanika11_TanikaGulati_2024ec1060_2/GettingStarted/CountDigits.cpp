#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int c=0;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    cout<<c;
    
    //write your code here
    
}