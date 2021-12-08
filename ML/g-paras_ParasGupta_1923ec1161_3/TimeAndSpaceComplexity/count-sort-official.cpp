#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

vector<int> countsort(vector<int>& arr, int max, int min) {
    vector<int> count(max-min+1, 0);
    vector<int> output(arr.size(), 0);
    for (auto i: arr)
        count[i-min] += 1;
    for (int i=0; i<max-min; i++)
        count[i+1] += count[i];
    for (auto i: arr)
        output[--count[i-min]] = i;
    return output;
}

void Display(vector<int>& arr) {
  for (int ele : arr) {
    cout << ele << endl;
  }
}


int main() {
  int n;
  cin >> n;
  vector<int> arr(n, 0);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int maxi = (int) -1e9;
  int mini = (int)1e9;

  for (int i = 0; i < n; i++) {
    mini = min(mini, arr[i]);
    maxi = max(maxi, arr[i]);
  }

  arr = countsort(arr, maxi, mini);
  Display(arr);

}