#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int t, flag = 0;

    cin >> t;

    if (t > 1) {
      for (int i = 2; i <= sqrt(t); i++) {
        if (t % i == 0) {
          flag++;

        }

      }
      if (flag > 0) {
        cout <<"not prime" << endl;
      }
      else {
        cout << "prime"<< endl;
      }

    }
   

  }
 return 0;
 

}