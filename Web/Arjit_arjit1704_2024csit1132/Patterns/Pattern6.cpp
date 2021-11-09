#include<iostream>
using namespace std;
void diamond(int p) {
  for (int k = 0; k < p; k++) {
    for (int j = 0; j < (2 * p); j++) {
      if (k + j <= p - 1) 
        cout << "*";
      else
        cout << " ";
      if ((k + p) <= j) 
        cout << "*";
      else
        cout << " ";
    }
    cout << "\n";
  }
  for (int k = 0; k < p; k++) {
    for (int j = 0; j < (2 * p); j++) {
      if (k >= j) 
        cout << "*";
      else
        cout << " ";
      if (k >= ((2 * p) - 1) - j) 
        cout << "*";
      else
        cout << " ";
    }
    cout << "\n";
  }
}
int main() {
  int Number_of_rows;
  cin >> Number_of_rows;
  diamond(Number_of_rows);
  return 0;
}