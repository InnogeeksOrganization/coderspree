#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int c=0;
    for(int i=n;i>0;i=i/10)
    {
        c++;
    }
    cout<<c<<"\n";
}