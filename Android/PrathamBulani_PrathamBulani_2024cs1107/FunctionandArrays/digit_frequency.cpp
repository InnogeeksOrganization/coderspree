#include<iostream>
using namespace std;
int digFreq(int n, int d) {
    int counter = 0;
  while (n > 0)
    {
      int temp = n % 10; 
      n = n / 10; 
      if (temp == d) 
        counter++;
    }
    return counter;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}