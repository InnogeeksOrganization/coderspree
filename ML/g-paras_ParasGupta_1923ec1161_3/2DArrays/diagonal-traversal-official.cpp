#include <iostream>
#include <vector>
using namespace std;

void upperDiagonal_traverse(int n, vector<vector<int>>& arr)
{
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i; j++) {
            cout << arr[j][j+i] << endl;
        }
    }
}

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> arr(n, vector<int>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> arr[i][j];

  upperDiagonal_traverse(n, arr);
}