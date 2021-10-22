#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here
    int i, j;
    for(i=0; i<n;i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
            {
                cout<<"*";
            }
            else
            {
                cout<<"\t";
            }
        }
        cout<<"\n";
    }
    
}