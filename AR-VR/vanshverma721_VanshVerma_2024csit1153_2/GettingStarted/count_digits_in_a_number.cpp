#include <iostream>
using namespace std;

int main()
{
  int n,count;
  scanf("%d",&n);
  while(n!=0)
  {
      n=n/10;
      count++;
  }
  printf("%d",count);
    
}