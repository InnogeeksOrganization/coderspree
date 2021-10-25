#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n,i;
    cin >> n;
    for(i=2;i<=n;i++)
    {
        while((n%i)==0 && n!=1)
        {
            cout<<i<<" ";
            n=n/i;
        }
    }

}
