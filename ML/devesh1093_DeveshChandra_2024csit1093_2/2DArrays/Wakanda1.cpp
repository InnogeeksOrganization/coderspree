#include<iostream>

using namespace std;


    int main() {
      int n;
      int m;
      cin >> n;
      cin >> m;
      int arr[n][m];
      int i, j = 0;
      for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
          cin >> arr[i][j];
        }
      }
     
 
  for (j = 0; j < m; j++) {
    if (j % 2 == 0) {
      for (i = 0; i < n; i++) {
        cout <<arr[i][j] << endl;
      } }
      else {
        for (i = n - 1; i >= 0; i--) {
          cout << arr[i][j] << endl;
        }
      }
}
      return 0;
    }
