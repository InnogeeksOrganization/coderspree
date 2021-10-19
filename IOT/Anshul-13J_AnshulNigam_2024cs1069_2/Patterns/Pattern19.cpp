#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int n,i,j;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 && (j<= (n+1)/2 || j==n))
                cout<<"*"<<"\t";
            else if(i==n && (j >= (n+1)/2 || j==1))
                cout<<"*\t";
            else if(j==(n+1)/2 || i==(n+1)/2)
                cout<<"*\t";
            else if(i<=(n+1)/2 && j==n)
                cout<<"*\t";
            else if(i>=(n+1)/2 && j==1)
                cout<<"*\t";
            else
                cout<<"\t";
            
            
        }
        cout<<endl;
    }
    
}