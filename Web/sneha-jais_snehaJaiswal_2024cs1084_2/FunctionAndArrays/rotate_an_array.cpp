#include <iostream>
using namespace std;

void rotate(int arr[], int n, int k)
{

    k = k % n; // if k is greater than
    if (k < 0)
    {
        k += n;
    }
    while (k--)
    {

        int temp = arr[n - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;

    rotate(arr, n, k);
    display(arr, n);
}