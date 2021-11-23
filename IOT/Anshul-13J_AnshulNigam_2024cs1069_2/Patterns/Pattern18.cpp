#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n,i,j;
    cin >> n;
    int sp=-1,st=n+2;
    for(i=0;i<n;i++)
    {
        if(i<=n/2)
        {
            st-=2;
            sp++;
        }
        else
        {
            st+=2;
            sp--;
        }
        if(i>0 && i<n/2)
        {
            for(j=0;j<sp;j++)
                cout<<"\t";
            cout<<"*\t";
            for(j=0;j<st-2;j++)
                cout<<"\t";
            cout<<"*\t";
        }
        else{
            for(j=0;j<sp;j++)
                cout<<"\t";
            for(j=0;j<st;j++)
                cout<<"*\t";
        }
        cout<<endl;
        
    }
    
}