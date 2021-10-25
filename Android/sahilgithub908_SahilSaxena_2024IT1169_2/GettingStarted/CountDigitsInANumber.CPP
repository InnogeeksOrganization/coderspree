#include <iostream>
using namespace std;

int main() {

    int n,res;
    cin >> n;
    int count=0;
   
    while(n>0)
    {
     res=n%10;
     n=n/10;
     count++;
    }
    
    cout << count << endl;

}
