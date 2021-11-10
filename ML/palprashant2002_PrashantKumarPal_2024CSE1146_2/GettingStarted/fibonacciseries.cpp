#include<iostream>
using namespace std;
int fib(int);
int main()
{
    int n,i,x;
    cout<<"Enter nth term of Fibonacci series : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
      x=fib(i);
      cout<<x<<' ';
    }
    return 0;
}

int fib(int k)
{ if(k==0)
  {  return 0;
  }
  else if(k==1)
  {  return 1;
  }
  else
  { return fib(k-1)+fib(k-2);
  }
}
  