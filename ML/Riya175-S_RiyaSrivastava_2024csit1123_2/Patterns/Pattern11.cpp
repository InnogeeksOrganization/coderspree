#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    //write your code here
    int i, j, z=1;
    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout<<z<<"\t";
            z++;
        }
        cout<<"\n";
    }
    
}