#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cin >> n;
    int left = 0, right = 2*n-2;
    int arr[2*n-1];
    for(i=0;i<2*n-1;i++)
        arr[i]=0;
    for(i=1;i<=n;i++){
        arr[left++] += i;
        if(left-1!=right)
            arr[right--] += i;
        for(j=0;j<2*n-1;j++){
            if(arr[j]==0)
                cout<<"	";
            else
                cout<<arr[j]<<"	";
        }
        cout<<endl;
    }
    //write your code here
    return 0;
}