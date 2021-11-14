#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,i,j,st,sp;
    cin >> n;
    st=((n+1)/2)+1;
    sp=-1;
    for(i=0;i<n;i++)
    {
        if(i<(n+1)/2)
        {
            st--;
            sp+=2;
        }
        else
        {
            sp-=2;
            st++;
        }
        for(j=0;j<st;j++)
            cout<<"*\t";
        for(j=0;j<sp;j++)
            cout<<"\t";
        for(j=0;j<st;j++)
            cout<<"*\t";
        cout<<endl;
    }
}