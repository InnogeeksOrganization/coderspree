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

    int first, last;
    first = last = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == data)
        {
            if (first == -1)
                first = i;
            last = i;
        }
    }
    cout << first << "\n"
         << last;
}