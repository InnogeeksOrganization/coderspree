#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int sp=n-1;
    //write your code here
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sp;j++)
        {
            cout<<"\t";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*\t";
        }
        sp--;
        cout<<"\n";
    }
    
}