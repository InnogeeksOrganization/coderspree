#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1;
    int arr1[n1];

    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    unordered_map<int, int> freq;

    for (auto i : arr1)
        freq[i]++;

    for (auto i : arr2)
    {
        if (freq[i] > 0)
        {
            cout << i << endl;
            freq[i] = 0;
        }
    }
}