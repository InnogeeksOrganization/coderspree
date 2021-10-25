#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int arr[10];
    int temp = n, i, rem, count=0;
    while (temp != 0)
    {
        rem = temp % 10;
        temp = temp - rem;
        temp = temp / 10;
        count++;
        arr[count] = rem;
    }
    for (i = 1; i <= count; i++)
    {
        cout << arr[i] << endl;
    }
}
