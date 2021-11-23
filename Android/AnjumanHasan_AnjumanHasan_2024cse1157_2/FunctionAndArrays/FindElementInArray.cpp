#include<iostream>
using namespace std;


int main(){
    int n,i,d,flag=-1;
    cin >> n;
    int A[n];
    for (i=0;i<n;i++)
    {
        cin >> A[i];
    }
    cin >> d;
     for (i=0;i<n;i++)
    {
        if(A[i]==d)
        {
            flag=i;
        }
    
    }
    cout << flag;
}