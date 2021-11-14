#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int space=n/2;
	int str=1;
	for(int i=1;;i<=n;i++)
	{
		for (int j=1;j<=space;j++)
		{
			for(int j=1;j<=str;j++)
			{
				cout<<"*\t";
			}
			
		}
		cout<<endl;
		if(i<=n/2)
		{
			space--;
			str=str+2;
		}
		else
		{
			space++;
			str=str-2;
		}
	}
}
