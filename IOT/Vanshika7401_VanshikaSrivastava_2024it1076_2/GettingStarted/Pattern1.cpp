#include <iostream>
using namespace std;

void halfPyramid(int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
}

int main() {
    int n;
    cin >> n;
    halfPyramid(n);
    return 0;
   
   
}

