#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,i,j;
    int m=1;
    cin >> n;
    for(i=n;i>0;i--)
    {
        for(j=1;j<i;j++)
        {
            cout<<"\t";
        }
        for(j=1;j<=m;j++)
        {
            cout<<"*\t";
        }
        cout<<endl;
        m++;
    }
    

    
}