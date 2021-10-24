#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int arr[10], arr1[10];
    int temp = n, i, rem, count=0, j;
    bool condition = false;
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
        if (arr[i] > count)
        {
            condition = false;
        }
        for (j = i+1; j <= count; j++)
        {
            if (arr[i] == arr[j])
            {
                condition = false;
            }
            else
                condition = true;
        }
    }
    if (condition == true)
    {
        for (i = 1; i <= count; i++)
        {
            for (j = 1; j <= count; j++)
            {
                if (arr[j] == i)
                {
                    arr1[i] = j;
                }
            }
        }
        for (i = count; i >= 1; i--)
        {
            cout << arr1[i];
        }
    }
}
