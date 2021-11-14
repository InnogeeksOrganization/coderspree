#include<iostream>
using namespace std;

int main()
{
    int i, j, k,n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<i;j++)
        {          
            cout << " ";
        }
        for(k=n;k>=i;k--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
