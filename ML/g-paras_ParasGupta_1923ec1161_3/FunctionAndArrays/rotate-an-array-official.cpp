#include <iostream>
using namespace std;

void rotate(int *arr, int n, int k)
{
    if (k >= 0)
    {
        k = k % n;
        for (int j = 0; j < k; j++)
        {
            int temp = arr[n - 1];
            for (int i = n - 1; i > 0; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[0] = temp;
        }
    }
    else
    {
        k = (-k) % n;
        for (int j = 0; j < k; j++)
        {
            int temp = arr[0];
            for (int i = 1; i < n; i++)
            {
                arr[i - 1] = arr[i];
            }
            arr[n - 1] = temp;
        }
    }
}

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, r;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> r;

    rotate(arr, n, r);
    display(arr, n);
}