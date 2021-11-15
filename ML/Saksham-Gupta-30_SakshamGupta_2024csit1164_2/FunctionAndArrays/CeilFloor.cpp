#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data, flag = 0;
    cin>>data;
    for (int i = 0; i < n; i++)
    {
        if (data == arr[i])
        {
            cout << data;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (data < arr[i])
            {
                cout << arr[i] << endl;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (data < arr[i + 1])
            {
                cout << arr[i] << endl;
                break;
            }
        }
    }
}