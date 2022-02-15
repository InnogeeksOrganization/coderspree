#include<iostream>
using namespace std;
int main()
{
    int n1,m1,n2,m2,i,j,k;
    cin>>n1>>m1;
    cout<<"enter the element in 1st array";
    int a[n1][m1];
    for(i=0;i<n1;i++)
        for(j=0;j<m1;j++)
            cin>>a[i][j];
            
    cin>>n2>>m2;
    cout<<"enter the element in 2nd array";
    int b[n2][m2];
    for(i=0;i<n2;i++)
        for(j=0;j<m2;j++)
            cin>>b[i][j];
            
    int c[n1][m2];
    if(m1 != n2)
        cout<<"Invalid input";
    else
    {
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m2;j++)
            {
                c[i][j]=0;
                for(k=0;k<m1;k++){
                    c[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        
        for(i=0;i<n1;i++)
    {
        for(j=0;j<m2;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    }
return 0;
    
}