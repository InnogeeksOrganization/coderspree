#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mid = n/2;
    int start = mid;
    int end = mid;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            //cout<<start<<end;
            if(j>=start && j<=end)
            {
                cout<<"*\t";
                
            }
            else
            {
                cout<<"\t";
            }
            
        }
        
        if(i<n/2)
        {
            //cout<<i;
             start--;
             end++;
        }
        else
        {
           // cout<<i;
            start++;
            end--;
            //cout<<start<<end;
        }
       
        
        cout<<endl;
    }
    
}
