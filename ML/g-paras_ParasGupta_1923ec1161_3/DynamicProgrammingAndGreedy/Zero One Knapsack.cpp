#include <iostream>
#include <vector>

using namespace std;

int zeroOneKnapsack(int n, vector<int> val, vector<int> weight, int cap)
{
	if (cap == 0 || n == 0)
		return 0;
	if (weight[n - 1] <= cap)
	{
		return max(val[n - 1] + zeroOneKnapsack(n - 1, val, weight, cap - weight[n - 1]), zeroOneKnapsack(n - 1, val, weight, cap));
	}
	else
		return zeroOneKnapsack(n - 1, val, weight, cap);
}

int main()
{

	int n;
	cin >> n;

	vector<int> val(n);
	for (int i = 0; i < n; i++)
	{
		cin >> val[i];
	}

	vector<int> weight(n);
	for (int i = 0; i < n; i++)
	{
		cin >> weight[i];
	}

	int cap;
	cin >> cap;

	int ans = zeroOneKnapsack(n, val, weight, cap);
	cout << ans << endl;
}