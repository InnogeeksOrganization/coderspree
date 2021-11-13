#include<iostream>
#include<string>
using namespace std;

void togglecase(string str)
{
    for (int i=0; i<str.length(); i++) {
        if (str[i]>=65 && str[i]<=90)
            cout << char(str[i]+32);
        else
            cout << char(str[i]-32);
    }
}

int main() {
  string str;
  getline(cin, str);
  togglecase(str);
  return 0;
}