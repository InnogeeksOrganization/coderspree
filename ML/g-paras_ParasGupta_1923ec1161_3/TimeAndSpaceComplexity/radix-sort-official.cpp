#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

void Display(vector<int> &arr)
{
    for (int ele : arr)
    {
        cout << ele << " ";
    }
}

void countsort(vector<int> &arr, int place)
{
    vector<int> count(10, 0);
    vector<int> output(arr.size(), 0);

    for (auto i : arr)
    {
        count[(i / place) % 10]++;
    }

    for (int i = 1; i < count.size(); i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        output[--count[(arr[i] / place) % 10]] = arr[i];
    }

    for (int i = 0; i < arr.size(); i++)
        arr[i] = output[i];

    cout << "After sorting on " << place << " place -> ";
    Display(arr);
    cout << endl;
}

void radixSort(vector<int> &arr)
{
    int max_el = INT_MIN;
    for (auto i : arr)
        max_el = max(max_el, i);
    int place = 1;
    while (max_el / place >= 1)
    {
        countsort(arr, place);
        place *= 10;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    radixSort(arr);
    Display(arr);
    return 0;
}