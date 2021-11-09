#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    for(int i=n;i>0;i=i/10)
    {
        cout<<i%10<<"\n";
    }
    
}