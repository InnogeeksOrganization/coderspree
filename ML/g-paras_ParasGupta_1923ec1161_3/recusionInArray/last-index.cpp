#include <iostream>
using namespace std;

int lastIndex(int arr[], int idx, int x, int n){
    if (idx == n-1)
        return -1;
    if (arr[n-1-idx] == x)
        return n-1-idx;
    return lastIndex(arr, idx+1, x, n);
}

int main(){
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = lastIndex(arr, 0, d, n);
    cout << p << endl;
}