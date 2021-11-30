#include<bits/stdc++.h>
using namespace std;

void dec()
{
	long long int n;
	int b;
	
	cin>>n>>b;
	
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
		sum = sum + (data[i]*pow(2,tens));
		tens++;
	}
	
	cout<<sum;
}

int main()
{
	dec();
	
	
	
}
