#include <iostream>

using namespace std;

void display(int arr[], int x, int y)
{
    for (int i = x; i <= y; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            display(arr, i, j);
}
