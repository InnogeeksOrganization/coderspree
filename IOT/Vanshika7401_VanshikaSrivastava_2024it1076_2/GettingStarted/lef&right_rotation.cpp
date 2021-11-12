#include <iostream>
#include<cmath>

#include <bits/stdc++.h>
using namespace std;


void leftRotatebyOne(int arr[], int n)
{
	int temp = arr[0], i;
	for (i = 0; i < n - 1; i++)
		arr[i] = arr[i + 1];

	arr[n-1] = temp;
}


void leftRotate(int arr[], int d, int n)
{
	for (int i = 0; i < d; i++)
		leftRotatebyOne(arr, n);
}


void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}


void RightRotate(int a[], int n, int k)
{
	
	
	k = k % n;

	for(int i = 0; i < n; i++)
	{
	if(i < k)
	{
			
	
		cout << a[n + i - k] << " ";
	}
	else
	{
			

		cout << (a[i - k]) << " ";
	}
	}
	cout << "\n";
}
	




int main()
{
	int arr[8];
	int n = sizeof(arr) / sizeof(arr[0]);
 int k;
 for(i=0;i<8;i++)
 cin>>arr[i];
 cin>>k;
 
 if(k<0)
 {

	leftRotate(arr, 2, n);
	printArray(arr, n);
}
else
{
	RightRotate(Array, N, K);
		printArray(arr, n);
}
	return 0;
}
