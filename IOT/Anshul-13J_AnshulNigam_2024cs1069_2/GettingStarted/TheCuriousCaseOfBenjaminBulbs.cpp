#include<iostream>
using namespace std;

int main(int argc, char**argv){
    int n,i,j;
    cin>>n;
    int a[n+1]={0};
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {   if(i%j==0)
            {
                if(a[i])
                    a[i]=0;
                else
                    a[i]=1;
            }
          //  cout<<a[i]<<"\t";
        }
   //     cout<<endl;
    }
    for(i=1;i<=n;i++)
    {
        if(a[i])
            cout<<i<<endl;
           // count++;}
    }
  //  cout<<count;
}