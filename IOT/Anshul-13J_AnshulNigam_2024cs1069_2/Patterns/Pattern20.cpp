#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n,i,j,k,m,o;
    cin >> n;
    k=(n+1)/2;
    m=k;
    o=k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1 || j==n)
                cout<<"*\t";
            else if(i>=k && (j==m || j==o))
            {
                cout<<"*\t";
            }

            else
                cout<<"\t";
            
        }
        cout<<endl;
        if(i>=k)
            {
                m++;
                o--;
            }
    }

    

}