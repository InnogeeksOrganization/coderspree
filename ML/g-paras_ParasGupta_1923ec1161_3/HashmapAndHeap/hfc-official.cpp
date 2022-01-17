#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cin >> str;

    map<char, int> count;

    for (auto i : str)
        count[i]++;

    char c = 'a';
    char m = 0;

    for (auto i : str)
    {
        if (count[i] > m)
        {
            c = i;
            m = count[i];
        }
    }
    cout << c << endl;
}