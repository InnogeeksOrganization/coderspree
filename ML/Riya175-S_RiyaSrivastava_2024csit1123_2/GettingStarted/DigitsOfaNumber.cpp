#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int arr[10], i=0, j;
    while(n != 0)
    {
        arr[i] = n%10;
        i++;
        n = n/10;
    }
    for(j=i-1; j>=0; j--)
    {
        cout<<arr[j]<<"\n";
    }
}