#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int count=0;
    int a=0,b=1;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<i+1;j++)
        {
            cout<<count<<"\t";
            a=b;
            b=count;
            count=a+b;
        }
        cout<<"\n";
    }
    //write your code here
    
}