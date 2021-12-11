#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr[i] = t;
        m = max(m, arr[i]);
    }

    while (m--)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > m)
                cout << "*"
                     << "\t";
            else
                cout << "\t";
        }
        cout << "\n";
    }
}