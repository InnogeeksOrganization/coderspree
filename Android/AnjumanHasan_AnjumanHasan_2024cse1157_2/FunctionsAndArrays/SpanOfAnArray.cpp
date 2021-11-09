#include<iostream>
using namespace std;

int main(){
   int n,i,j,max,min;
    cin >> n;
    int A[n];
    for (i=0;i<n;i++)
    {
        cin >> A[i];
    }
    max=A[0];
    min=A[0];
    for (i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[j]>max)
            {
                max=A[j];
            }
        }
    }
     for (i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[j]<min)
            {  
                min=A[j];
            }
        }
    }

    cout << max-min;
}