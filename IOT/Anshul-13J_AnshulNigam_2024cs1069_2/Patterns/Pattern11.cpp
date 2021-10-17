#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,i,j,k=1;;
    cin >> n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<(i+1);j++)
        {
            cout<<k++<<"\t";
        }
        cout<<endl;
    }
    
}