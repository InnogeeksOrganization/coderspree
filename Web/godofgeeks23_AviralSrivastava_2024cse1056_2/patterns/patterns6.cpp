#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    for(int i=1;i<=((n+1)/2);i++)
    {
        for(int j=1;j<=((n+3)/2)-i;j++)
            cout<<"*\t";
        for(int j=1;j<=(2*i)-1;j++)
            cout<<"\t";
        for(int j=1;j<=((n+3)/2)-i;j++)
            cout<<"*\t";
        cout<<endl;
    }
    for(int i=((n+1)/2)-1;i>=1;i--)
    {
        for(int j=1;j<=((n+3)/2)-i;j++)
            cout<<"*\t";
        for(int j=1;j<=(2*i)-1;j++)
            cout<<"\t";
        for(int j=1;j<=((n+3)/2)-i;j++)
            cout<<"*\t";
        cout<<endl;
    }
    
}