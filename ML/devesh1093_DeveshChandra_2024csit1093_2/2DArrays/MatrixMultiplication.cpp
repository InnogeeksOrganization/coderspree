#include<iostream>
using namespace std;

int main() {
  int r1, r2, c1, c2;
  int i, j, k;
  cin >> r1 >> c1;
  int ar1[r1][c1];
  for (i = 0; i < r1; i++) {
    for (j = 0; j < c1; j++) {
      cin >> ar1[i][j];
    }
  }

  cin >> r2 >> c2;
  int ar2[r2][c2];
  for (i = 0; i < r2; i++) {
    for (j = 0; j < c2; j++) {
      cin >> ar2[i][j];
    }
  }
int prod[r1][c2]={};
  if (c1 == r2) {
    int K = c1;
    
    for (i = 0; i < r1; i++) {
      for (j = 0; j < c2; j++) {
        for (k = 0; k < K; k++) {
  prod[i][j] = prod[i][j] + ar1[i][k] * ar2[k][j];
        }
      }
    }
     for (i = 0; i < r1; i++) {
    for (j = 0; j < c2; j++) {
        cout << prod[i][j]<<' ';
      }
      cout << endl;
    }
    }
    else{
        cout<<"Invalid input";
    }
    
   
    return 0;

  }
