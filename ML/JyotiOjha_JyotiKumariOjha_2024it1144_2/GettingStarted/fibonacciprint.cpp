#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int n1=0,n2=1,n3,i;
    //write your code here
    cout<<n1<<endl<<n2<<endl;
    for(i=2;i<n;++i)
    {
        n3=n1+n2;
        cout<<n3<<endl;
        n1=n2;
        n2=n3;
    }
    
}