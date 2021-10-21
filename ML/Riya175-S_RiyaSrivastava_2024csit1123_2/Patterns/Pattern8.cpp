#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here
    int i, j, k;
    for(i=1; i<=n; i++)
    {
        for(j=n-i; j>0; j--)
        {
            cout<<"\t";
        }
        cout<<"*";
        cout<<"\n";
    }
}