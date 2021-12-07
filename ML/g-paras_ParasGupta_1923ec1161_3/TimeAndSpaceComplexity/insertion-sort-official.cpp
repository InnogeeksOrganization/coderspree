#include <iostream>
using namespace std;

bool isGreater(int arr[], int j, int i)
{
    cout << "Comparing " << arr[i] << " and " << arr[j] << endl;
    if (arr[i] < arr[j])
    {
        return true;
    }
    else
    {
        return false;
    }
}

void swap(int arr[], int i, int j)
{
    cout << "Swapping " << arr[i] << " and " << arr[j] << endl;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = i;
        while (key > 0 and isGreater(arr, key - 1, key))
        {
            swap(arr, key - 1, key);
            key--;
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, n);
    print(arr, n);
}