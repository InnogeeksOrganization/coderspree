#include<iostream>
#include<string>
using namespace std;

void swap(string &str, int l, int r) {
    char temp = str[l];
    str[l] = str[r];
    str[r] = temp;
}

void printallperm(string str, int l, int r)
{
    if (l == r)
        cout << str << endl;
    for (int i=l; i<r; i++){
        swap(str, i, l);
        printallperm(str, l+1, r);
        swap(str, i, l);
    }
}
int main()
{
  string str;
  getline(cin, str);

  printallperm(str, 0, str.length());
}