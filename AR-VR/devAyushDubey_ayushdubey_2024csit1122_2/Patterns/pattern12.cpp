#include <iostream>
using namespace std;

int fact(int n){
    int sum = 0;
    for(int i=1;i<=n;i++)
        sum = sum + i;
    return sum;
}

void fib(int arr[],int n){
    int c = 0;
    int a = 0;
    int b = 1;
    arr[0] = a;
    arr[1] = b;
    for(int i=2;i<n;i++){
        c = a + b;
        arr[i] = c;
        a = b;
        b = c;
    }
}

int main(){
    int n,i,j,count=0;
    cin >> n;
    int arr[fact(n)];
    fib(arr,fact(n));
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++)
            cout<<arr[count++]<<"\t";
        cout<<endl;
    }
    //write your code here
    
}