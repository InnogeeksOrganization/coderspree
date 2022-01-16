#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void showq(priority_queue<int, vector<int>, greater<int>> &q){
    if (q.empty())
        return;
    cout << q.top() << endl;
    q.pop();
    showq(q);
}

void findKthLargest(vector<int> const& arr, int k) {

  priority_queue<int, vector<int>, greater<int>> q;
  
  for (int i=0; i<arr.size(); i++){
      if (i < k)
        q.push(arr[i]);
      else if (q.top() < arr[i]){
          q.pop();
          q.push(arr[i]);
      }
  }
  showq(q);

  return;

}

int main()
{
  vector<int>arr;
  int n;
  cin >> n;
  for (int i = 0 ; i < n; i++) {
    int data;
    cin >> data;
    arr.push_back(data);
  }
  int k;
  cin >> k;
  findKthLargest(arr, k);

  return 0;

}