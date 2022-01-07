#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l1;
    int n, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        l1.push_back(t);
    }
    list<int> l2 = l1;
    l2.reverse();
    for (int i = 0; i < n; i++)
    {
        if (l1.front() != l2.front())
        {
            cout << "false" << endl;
            return 0;
        }
        l1.pop_front();
        l2.pop_front();
    }
    cout << "true" << endl;
    return 0;
}