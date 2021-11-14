#include <iostream>
#include <vector>
using namespace std;

vector<int> allIndex(vector<int>& arr, int idx, int data, int count)
{
    if (idx == arr.size()) {
        vector<int> base(count, 0);
        return base;
    }
    if (arr[idx] == data)
        count++;
    vector<int> ans = allIndex(arr, idx+1, data, count);
    if (arr[idx] == data)
        ans[count-1] = idx;
    return ans;
}

int main() {
  int n ;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++) {
    int d;
    cin >> d;
    arr.push_back(d);
  }
  int data;
  cin >> data;
  vector<int> ans = allIndex(arr, 0, data, 0);
  if (ans.size() == 0) {
    cout << endl;
    return 0;
  }
  for (int ele : ans) cout << ele << endl;

  return 0;
}