#include <iostream>
using namespace std;
int main()
{
	int n,i,r;
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		cout<<r<<endl;
	}
}
