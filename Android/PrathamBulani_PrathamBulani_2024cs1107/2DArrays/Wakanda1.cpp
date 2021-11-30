#include<iostream>
#include<vector>

using namespace std;

void columnTraversal(vector<vector<int>> mat) {
int row=mat.size();
int col=mat[0].size();

for(int c=0;c<col;c++){
    if(c%2 == 0){
        for(int r =0;r<row;r++){
            cout<<mat[r][c]<<endl;
        }
    }
    else{
        for(int r=row-1;r>=0;r--){
            cout<<mat[r][c]<<endl;
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