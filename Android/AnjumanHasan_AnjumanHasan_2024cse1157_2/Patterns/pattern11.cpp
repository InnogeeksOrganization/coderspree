#include <iostream>
using namespace std;

int main(){
    int n,i,j,k,p,num;
    cin >> n;
    k=n-1;
    p=1;
    num=1;
    for(i=1;i<=n;i++)
    {
         for(j=1;j<=p;j++)
        {
            cout << num;
            num++;
        }
        for(j=1;j<=k;j++)
        {
            cout << " ";
        }
       
        cout << endl;
        k--;
        p++;
    }

}
