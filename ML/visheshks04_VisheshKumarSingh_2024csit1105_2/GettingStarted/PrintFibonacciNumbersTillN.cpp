#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int x=0, y=1;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cout<<x<<endl;
        int temp = x+y;
        x = y;
        y = temp;
    }
    
}
