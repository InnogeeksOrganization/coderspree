#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n,i,j,st=1,sp;
    cin >> n;
    sp=n/2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sp;j++)
        {
            cout<<"\t";
        }
        for(j=1;j<=st;j++)
        {
            if(j<=st/2 && i!=(n/2)+1 )
                cout<<"\t";
            else
                cout<<"*\t";
        }
        cout<<endl;
            if(i<= n/2)
            {
                sp--;
                st+=2;
            }
            else{
                sp++;
                st-=2;
            }
        
    }
    
}