#include<iostream>
#include<vector>

using namespace std;

void columnTraversal(vector<vector<int>> mat) {
  for(int j=0;j<mat[0].size();j++){
      if(j%2==0){
        for(int i=0;i<mat.size();i++){
            cout<<mat[i][j]<<endl;
        }
      }
      else{
        for(int i=mat.size()-1;i>=0;i--){
            cout<<mat[i][j]<<endl;
        }
      }
  }
}

int main() {
  int n;
  int m;
  cin >> n;
  cin >> m;

  vector<vector<int>> mat;
  for (int i = 0; i < n; i++) {
    vector<int> arr;
    for (int j = 0; j < m; j++) {
      int ele;
      cin >> ele;
      arr.push_back(ele);
    }
    mat.push_back(arr);
  }

  columnTraversal(mat);
}