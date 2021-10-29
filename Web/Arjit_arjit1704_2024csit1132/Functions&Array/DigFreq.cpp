#include <bits/stdc++.h>
using namespace std;
int digFreq(int n, int d)
{
	int counter=0;
	while(n>0){
		if(n%10==d)
			counter++;
		n=n/10;
	}
	return counter;
}
int main()
{
	int N,D;
	cin>>N>>D;
	cout<<digFreq(N,D);
	return 0;
}
