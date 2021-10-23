#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,i,j;
    int v=1;
    cin >> n;

    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout<<v<<"\t";
        v++;
        }
        cout<<endl;
    }
}