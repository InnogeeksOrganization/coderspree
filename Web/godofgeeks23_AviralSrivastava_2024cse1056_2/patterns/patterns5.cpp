#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    for(int i=1;i<=n/2;i++)
    {
        for(int j=1;j<=(n/2)-i+1;j++)
            cout<<"\t";
        for(int j=1;j<=(2*i)-1;j++)
            cout<<"*\t";
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
        cout<<"*\t";
    cout<<endl;
    for(int i=n/2;i>=1;i--)
    {
        for(int j=1;j<=(n/2)-i+1;j++)
            cout<<"\t";
        for(int j=1;j<=(2*i)-1;j++)
            cout<<"*\t";
        cout<<endl;
    }
}