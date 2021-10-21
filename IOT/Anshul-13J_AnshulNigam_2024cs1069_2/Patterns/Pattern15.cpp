#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n,i,j,st=1,k;
    cin >> n;
    int sp=n/2;
    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=0;j<sp;j++)
            cout<<"\t";
        if(i<=n/2)
        {
            for(j=0;j<=st/2;j++)
                cout<<k++<<"\t";
            k--;
            for(j=(st/2)+1;j<st;j++)
            {
                cout<<--k<<"\t";
            }
        }
        else{
            k=n+1-i;
            for(j=0;j<=st/2;j++)
            {
                cout<<k<<"\t";
                k++;
            }
            k--;
            for(j=(st/2)+1; j<st;j++)
            {
                k--;
                cout<<k<<"\t";
                
            }
            
        }
        cout<<endl;
        if(i<=n/2)
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