#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,k;
    cin >> n;
    k=1;
    //write your code here
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<k;
            cout<<"\t";
            k++;
        }
        cout<<endl;
    }
    
}