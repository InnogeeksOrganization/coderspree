#include<iostream>
using namespace std;

int* inverse(int* arr, int n)
{
    bool condition = true;
    int i, j;
    int* arr1 = new int[n];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > n - 1)
        {
            condition = false;
            break;
        }
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                condition = false;
                break;
            }
            else
                condition = true;
        }
        if (condition == false)
            break;
    }
    if (condition == true)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (arr[j] == i)
                {
                    arr1[i] = j;
                }
            }
        }
    }
    return arr1;
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int* inv = inverse(arr,n);
    display(inv,n);
    
}