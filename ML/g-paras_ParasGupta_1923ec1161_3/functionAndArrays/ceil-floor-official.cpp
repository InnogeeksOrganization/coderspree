#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int data;
    cin >> data;

    int i = 0;
    while (i < n && arr[i] <= data)
    {
        i++;
    }
    cout << arr[i] << endl;
    cout << arr[i - 1];
}