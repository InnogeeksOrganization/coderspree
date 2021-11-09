#include<iostream>
using namespace std;
int main()
{
int sum = 0, n;
int a = 0;
int b = 1;
cin >> n;
while(sum <= n)
{
cout << sum <<endl;
a = b;  
b = sum;
sum = a + b; 
}
return 0;
}
