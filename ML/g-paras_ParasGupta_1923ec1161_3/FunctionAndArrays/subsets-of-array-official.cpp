#include <iostream>
using namespace std;

void printSubset(int arr[], int start, int end, string ans)
{
    if (start > end)
        return;
    printSubset(arr, start + 1, end, ans + "-\t");
    printSubset(arr, start + 1, end, ans + to_string(arr[start]) + "\t");
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    printSubset(arr, 0, n - 1, "");

    return 0;
}