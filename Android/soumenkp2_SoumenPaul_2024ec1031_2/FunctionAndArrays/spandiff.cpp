#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	
	int array[test];
	for(int i=0;i<test;i++)
	{
		cin>>array[i];	
	}
	
	
	int max = array[0];
	int min = array[0];
	
	for(int i=0;i<test;i++)
	{
		if(max<array[i])
		{
			max = array[i];
		}
		else if(min>array[i])
		{
			min = array[i];
		}
		
	}
	
	cout<<max-min;
	
	
	
	
	
	
	
}
