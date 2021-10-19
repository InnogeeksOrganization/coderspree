#include <iostream.h>
using namespace std;
int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    //write your code here
    int i, j, a=0, b=1, c=a+b;
    cout<<"0"<<"\n";
    for(i=1; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout<<c<<"\t";
            c = a+b;
            a = b;
            b = c;
        }
        cout<<"\n";
    }
    return 0;
}

