#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n,i,j;
    cin >> n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n-1);j++)
        {
            if(j<=i || j>= (2*n-i))
            {
                if(j<=i)
                    cout<<j<<"\t";
                else
                    cout<<2*n-j<<"\t";
            }
            else
                cout<<"\t";
        }
    cout<<endl;
    }
    
    
}