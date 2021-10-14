#include <iostream>
using namespace std;
int digits(long long n)
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
    int res,flag;
    long long n, newno=0,x,y;
    cin >> n;
  x = n;
int i=0;
    while(n>0)
    {
     res=n%10;
     n=n/10; 
     newno=newno*10+res;
     
    }
    y=newno;
while(newno>0)
    {
     res=newno%10;
     newno=newno/10; 
     cout << res << endl;
    }
      if(digits(x)!=digits(y))
    {
        cout << 0 << endl;
    }
    } 
    