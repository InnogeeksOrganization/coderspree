#include<iostream>
using namespace std;

void reverse(int* arr, int n) {
  int t = 0;
  for (int i = 0; i < n / 2; i++) {
    t = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = t;
  }
}

void display(int* arr, int n) {
  for (int i = 0 ; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;

  int* arr = new int[n];
  for (int i = 0 ; i < n; i++) {
    cin >> arr[i];
  }
  reverse(arr, n);
  display(arr, n);
}