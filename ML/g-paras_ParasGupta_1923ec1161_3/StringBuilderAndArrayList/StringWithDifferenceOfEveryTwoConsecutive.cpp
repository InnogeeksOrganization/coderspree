#include<iostream>
#include<string.h>

using namespace std;

void printstr(string str)
{
  cout << str[0];
  for (int i=1; i<str.length(); i++){
      cout << str[i] - str[i-1];
      cout << str[i];
  }
}
int main()
{
  string str;
  getline(cin, str);
  printstr(str);
  return 0;
}