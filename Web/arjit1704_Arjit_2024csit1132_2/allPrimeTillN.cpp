#include <iostream>
using namespace std;
int main()
{
int a, b, i, flag;
cin >> a;
cin >> b;
while (a < b)
{
flag = 0;
for(i = 2; i <= a/2; ++i)
{
if(a % i == 0)
{
flag = 1;
break;
}
}
if (flag == 0)
cout << a <<" ";
++a;
}
cout << endl;
return 0;
}