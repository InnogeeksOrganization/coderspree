#include <iostream>
#include <vector>

using namespace std;

int unboundedKnapsack(int n,vector<int> val, vector<int> weight,int cap){
  if (n==0 || cap==0)
    return 0;
  if (weight[n-1] <= cap)
    return max(unboundedKnapsack(n-1, val, weight, cap), val[n-1]+unboundedKnapsack(n, val, weight, cap-weight[n-1]));
  return unboundedKnapsack(n-1, val, weight, cap);
}


int main() {

  int n;
  cin>>n;
  vector<int> val(n);
  for (int i = 0; i < n; i++) {

    cin>>val[i];
  }
  vector<int> weight(n);
  for (int i = 0; i < n; i++) {
    cin>>weight[i];
  }
  int cap;
  cin>>cap;
  
  cout << unboundedKnapsack(n,val, weight,cap) << endl;;
}