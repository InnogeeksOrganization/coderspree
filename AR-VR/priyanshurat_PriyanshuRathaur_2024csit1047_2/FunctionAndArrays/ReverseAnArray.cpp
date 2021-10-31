#include <iostream>

using namespace std;


void reverse(int arr[],int crr[],int t)
{int j,k=t;
for(j=1;j<=t;j++)
    {crr[k]=arr[j];
        k--;
    }
    
    
}

void display(int t,int crr[])
{int l;
    for(l=1;l<=t;l++)
    {cout<<crr[l]<<" ";}
    }
    

int main()
{
  int t,i;
  cin>>t;
  int arr[t],crr[t];
  for(i=1;i<=t;i++)
  {cin>>arr[i];}
   reverse(arr,crr,t);
display(t,crr);

    return 0;
}

