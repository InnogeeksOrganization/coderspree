#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	 int str=n,space=0;
	 
	 for (int i=1;i<=n;i++)
	 {
	 	for (int j=1;j<=space;j++)
	 	{
	 		cout<<"\t";
		 }
		 for(int j=1;j<=str;j++)
		 {
		 	cout<<"*\t";
		 }
		 cout<<endl;
		 space++;
		 str--;
	 }
	 
}
