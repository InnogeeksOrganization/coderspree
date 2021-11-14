#include<iostream>
#include<string.h>
using namespace std;


void String_compression01(string str)
{
    string ans = "";
    ans = ans + str[0];
    char prev = str[0];
    for (int i = 1; i < str.length(); i++)
    {
        if (prev != str[i])
            ans = ans + str[i];
        prev = str[i];
    }
    cout << ans << endl;
}

void String_compression02(string str)
{
    string ans = "";
    ans = ans + str[0];
    char prev = str[0];
    int count = 1;
    for (int i = 1; i < str.length(); i++)
    {
        if (prev != str[i])
        {
            if (count > 1)
                ans = ans + to_string(count);
            ans = ans + str[i];
            count = 1;
        }
        else
            count += 1;
        prev = str[i];
    }
    if (count > 1)
        ans = ans + to_string(count);
    cout << ans << endl;
}

int main()
{
  string str;
  getline(cin, str);
  String_compression01(str);
  String_compression02(str);
}