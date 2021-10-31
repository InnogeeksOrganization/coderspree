#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,j,k,l;
    cin >> n;
    int space=1;
    int star=(n+1)/2;
    for (int i=0;i<n;i++)
    {
        for(j=0;j<star;j++)
        cout<<"*\t";
        for(k=0;k<space;k++)
        cout<<"\t";
        for(j=0;j<star;j++)
        cout<<"*\t";
        if(i<n/2)
        { star--;
          space+=2;
            
        }
        else if(i>=n/2)
        {
            star++;
            space-=2;
        }
        cout<<"\n";
    }
    