#include<iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int* arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int min = arr[0];
    int max = arr[0];
    
    for (int i=0; i<n; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    cout << max - min;
}