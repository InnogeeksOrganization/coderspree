#include<iostream>
using namespace std;

int find_element(int n, int ar[], int d)
{
    for (int i= 0; i < n; i++)
    {
        if (d == ar[i])
            return i;
    }
    return -1;
}

int main()
{
    int n,d;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cin >> d;
   int idx = find_element(n,ar,d);
    cout << idx;

return 0;
}
