#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int i,j,flag = 0;
        for(i = 2; i<=n/2; i++)
        {
            if(n%i == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            cout<<"not prime";
        else
            cout<<"prime";
            cout<<endl;
    }
    return 0;
}