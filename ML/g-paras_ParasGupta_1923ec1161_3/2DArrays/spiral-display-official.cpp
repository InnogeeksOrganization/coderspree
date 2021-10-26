#include<iostream>
using namespace std;

int int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }

    int minr = 0;
    int minc = 0;
    int maxr = n-1;
    int maxc = m-1;

    while (True) {
        // left wall
        for(int i=0; i<maxr; i++){
            cout << arr[i][minc] << endl;
        }
        // bottom wall
        for(int i=)
    }

    return 0;
}