#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int i,j,sp,st,isp;
    sp=(n/2)+1;
    st=-1;
    isp=-1;
    for(i=0;i<n;i++)
    {
        if(i<=n/2)
        {
            sp--;
            st+=2;
            if(i!=0)
                isp+=2;
        }
        else
        {
            sp++;
            st-=2;
            isp-=2;
        }
        for(j=0;j<sp;j++)
            cout<<"\t";
        cout<<"*\t";
        if(i!=0 && i!=n-1)
        {
            for(j=0;j<isp;j++)
                cout<<"\t";
            cout<<"*";
        }
        cout<<endl;
    }
    
}