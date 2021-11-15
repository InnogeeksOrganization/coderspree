#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data;
    cin>>data;
    int first, last, flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (data == arr[i])
        {
            first = i;
            flag = 1;
            cout << first << endl;
            break;
        }
    }
    if (flag == 0)
        cout << "-1" << endl;
    for (int i = 0; i < n; i++)
    {
        if (data == arr[i])
        {
            flag = 1;
            last = i;
        }
    }
    if (flag == 0)
        cout << "-1";
    else
        cout << last;
}