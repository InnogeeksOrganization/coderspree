#include<bits/stdc++.h>
using namespace std;

void dectoany(int n, int base)
{
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





int dec(int n, int b)
{
	
	
	vector<int> data;
	
	while(n!=0)
	{
		data.push_back(n%10);
		n=n/10;
		
	}
	
	int s = data.size()-1;
	int tens = 0;
	int sum = 0;
	
	for(int i=0;i<=s;i++)
	{
		//cout<<data[i]*pow(2,tens)<<" ";
		sum = sum + (data[i]*pow(b,tens));
		tens++;
	}
	
	return sum;
}



int main()
{
	
	int base;
	cin>>base;
	
	int n;
	cin>>n;
	
	int m;
	cin>>m;
	
	int sum = dec(n,base) - dec(m,base);
	
	//int sum = dec(n,base);
	//cout<<sum;
	
	
	dectoany(sum,base);
	
}
