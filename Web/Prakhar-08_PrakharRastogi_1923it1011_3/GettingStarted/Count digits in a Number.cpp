#include <iostream>
using namespace std;

int count(int n) {
    if(n == 0)
        return 1;
    
    if(n < 10)
        return 1;
        
    return 1 + count(n/10);
}

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int ans = count(n);
    cout << ans << endl;
    
    return 0;
}