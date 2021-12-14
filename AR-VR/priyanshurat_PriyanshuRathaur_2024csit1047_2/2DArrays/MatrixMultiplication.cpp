#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,i,j;
    cin>>a>>b;
    int arr[a][b];
    for(i=0;i<a;i++)
    {for(j=0;j<b;j++)
        {cin>>arr[i][j];}
    }
    
    
    cin>>c>>d;
    int mul[a][d];
    int brr[c][d];
     for(i=0;i<c;i++)
    {for(j=0;j<d;j++)
        {cin>>brr[i][j];}
    }
    
    
    if (b!=c)
    {cout<<"Invalid input";}
    
    else{
        
        
        for(i=0;i<a;i++)
        {for(j=0;j<d;j++)
            { mul[i][j]=0;
            for(int k=0;k<b;k++)
                {mul[i][j]+=arr[i][k]*brr[k][j];   }
            }
        }
        
         
    for(i=0;i<a;i++)    
{    
for(j=0;j<d;j++)    
{    
cout<<mul[i][j]<<" ";    
}    
cout<<endl;    
}   
        
        
        
        
        
        
        
      }
    
     

    return 0;
}