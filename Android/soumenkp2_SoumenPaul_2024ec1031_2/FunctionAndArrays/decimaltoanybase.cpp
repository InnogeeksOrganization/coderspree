#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	int base;
	
	cin>>n;
	cin>>base;
	
	//cout<<1;
	vector<int> data;
	int save = n;
	
	while(n!=0)
	{
		data.push_back(n%base);
		//cout<<n%base<<" ";
		n=n/base;
	}
	
	//data.push_back(1);
	
	for(int i=data.size()-1;i>=0;i--)
	{
		cout<<data[i];
	}
	
}
