#include <iostream>
using namespace std;

int main(){
int n,i,j;
cin >> n;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(j==n-1||j==0)
        {
           cout << "*\t";
        }
       else if(i==j&&i>=(n-1)/2)
        {
        cout << "*\t";
        }
        else if(i+j==(n-1)&&i>=(n-1)/2)
        {
            cout << "*\t";
        }
        else 
        cout << "\t";
    }
    cout << endl;
}

}
