#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,i,j,m;
    cin >> n;
    m=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=m)
                cout<<"\t";
            else
                cout<<"*\t";
        }
        cout<<endl;
        m++;
    }

}