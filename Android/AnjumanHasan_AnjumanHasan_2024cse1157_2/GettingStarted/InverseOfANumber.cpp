#include <iostream>
using namespace std;
int digits(int n)
{
    int count=0;
    while(n>0)
    {
     n=n/10;
     count++;
    }
    return count;
}
int main(){
int A[9],B[9],n,i,j,x,k=1,rem;
B[0]=0;
A[0]=0;
cin >> n ;
x=digits(n);
while(n>0)
{
rem =n%10;
n=n/10;
A[k]=rem;
k++;
}

 for(i=1;i<=x;i++)
 {
     for(j=1;j<=x;j++)
     {
         if(A[j]==i)
         {
             B[i]=j;
             break;
         }
     }
 }
 int y = x;
for ( i = 1; i <=x ; i++)
{
    cout << B[y];
    y--;
}


}