#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int val)
{
    for (int j = 2; j <= val / 2; j++)
    {
        if (val % j == 0)
        {
            return false;
        }
    }

    return true;
}

void removeprimes(vector<int> v)
{
    int n = v.size();
    cout << "[";
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (!isPrime(v[i]))
        {
            if (flag)
                cout << ", ";
            cout << v[i];
            flag = true;
        }
    }
    cout << "]";
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    removeprimes(v);
}