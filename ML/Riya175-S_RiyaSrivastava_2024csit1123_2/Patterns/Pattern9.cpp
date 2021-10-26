#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here
    int i, j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==j)
            {
                cout<<"*"<<"\t";
            }
            else if(j == (n+1-i))
            {
                cout<<"*"<<"\t";
            }
            else
            {
                cout<<"\t";
            }
        }
        cout<<"\n";
    }
}