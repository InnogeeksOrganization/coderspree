#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int i, j, k;
    for(i=1; i<=n; i++)
    {
        for(k=1; k<i; k++)
        {
            cout<<"\t";
        }
        for(j=n; j>=i; j--)
        {
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }
}