#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    //write your code here
    int i, j;
    for(i=n; i>0; i--)
    {
        for(j=i; j>0; j--)
        {
            cout<<"*	";
        }
        cout<<"\n";
    }
}
