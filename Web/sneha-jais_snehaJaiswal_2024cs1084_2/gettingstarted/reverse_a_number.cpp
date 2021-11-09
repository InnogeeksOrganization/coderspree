#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    while(n>0){
        int x=n%10;
        n=n/10;
        cout<<x<<"
";
    }
    return 0;
    
}