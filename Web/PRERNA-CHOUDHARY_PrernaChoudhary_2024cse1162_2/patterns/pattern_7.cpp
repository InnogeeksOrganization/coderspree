#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
for(int i=0;i<n;i++)
{
    for(int j=0;j<=i;j++)
    {
        if(i==j)
        cout<<"*\t";
        else cout<<"\t";
    }
    cout<<"\n";
}
    //write your code here
    
}