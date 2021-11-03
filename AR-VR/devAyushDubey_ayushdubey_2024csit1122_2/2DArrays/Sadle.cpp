#include <iostream>
using namespace std;

bool constraint(long int i){
    if(i> -1000000000 && i< 1000000000)
        return true;
    return false;
}

int main()
{
    int n,i,j;
    cin >> n;
    long int** arr = new long int*[n];
    int* min = new int[n];
    for(i = 0; i < n; i++) {
        arr[i] = new long int[n];
        for (j = 0; j < n; j++) {
            cin >> arr[i][j];
            if(constraint(arr[i][j])){
                if (j == 0)
                    min[i] = arr[i][j];
                else if (arr[i][j] < min[i])
                    min[i] = arr[i][j];
            }
            else{
                cout<<"Invalid input";
                return 0;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[j][i]>min[i])
                break;
        }
        //cout<<j<<" "<<min[i]<<endl;
        if(j==n-1)
            cout<<min[i];
    }
    return 0;
}