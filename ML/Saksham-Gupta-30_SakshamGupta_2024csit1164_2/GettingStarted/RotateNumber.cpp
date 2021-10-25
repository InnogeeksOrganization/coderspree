#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int n, k;
    cin >> n >> k;
    int arr[10], arr1[10];
    int temp = n, i, rem, count = 0;
    while (temp != 0)
    {
        rem = temp % 10;
        temp = temp - rem;
        temp = temp / 10;
        count++;
        arr[count] = rem;
    }
    temp = count;
    for (i = 1; i <= count; i++)
    {
        arr1[i] = arr[temp];
        temp--;
    }
    if (k >= 0)
    {
        k = k % count;
        for (i = count - k + 1; i <= count; i++)
        {
            cout << arr1[i];
        }
        for (i = 1; i < count - k + 1; i++)
            cout << arr1[i];
    }
    else
    {
        k = -1 * (k % count);
        for (i = k + 1; i <= count; i++)
            cout << arr1[i];
        for (i = 1; i <= k; i++)
        {
            cout << arr1[i];
        }
    }
}