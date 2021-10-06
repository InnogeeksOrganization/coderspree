#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n1, n2;
    int gcd, lcm;
    cin >> n1 >> n2;
    for (int i = 1; i <= n1 && i <= n2; i++) {
        
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;
    cout<<gcd<<'\n';
    cout << lcm;
    return 0;
}
