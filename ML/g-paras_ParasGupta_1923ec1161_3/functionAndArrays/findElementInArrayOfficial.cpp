#include<iostream>
using namespace std;


int main(){
    int n, d;
    cin >> n;
    int* arr = new int[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cin >> d;
    int ans = -1;
    for (int i=0; i<n; i++) {
        if (arr[i] == d)
            ans = i;
    }
    cout << ans;
}