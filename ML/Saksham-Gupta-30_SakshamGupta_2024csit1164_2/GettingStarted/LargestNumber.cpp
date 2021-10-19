#include<iostream>
using namespace std;
int *largest(int Arr[], int N)
{
    int max, i, A, B, temp, j, flag = 1;;
    max = Arr[1];
    for (i = 1; i <= N; i++)
    {
        if (max < Arr[i])
        {
            max = Arr[i];
        }
    }
    for (i = 1; i <= N; i++)
    {
        if (Arr[1] < max)
        {
            B = i;
            break;
        }
        for (j = i; j <= N; j++)
        {
            if (Arr[i] < Arr[j])
            {
                B = i;
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
        if ((Arr[i] >= Arr[i + 1]) && (Arr[i] <= max))
        {
            
            max = Arr[i];
            continue;
        }
        else
        {
            B = i;
            break;
        }
    }
    max = Arr[i + 1];
    for (j = i + 1; j <= N; j++)
    {
        if (max < Arr[j])
        {
            max = Arr[j];
            A = j;
        }
        else if (max == Arr[j])
        {
            max = Arr[j];
            A = j;
        }
    }
    temp = Arr[A];
    Arr[A] = Arr[B];
    Arr[B] = temp;
    return Arr;
}
int main()
{
    int T, N, i, j, k;
    int Arr[100001];
    cin >> T;
    for (i = 1; i <= T; i++)
    {
        cin >> N;
        for (j = 1; j <= N; j++)
        {
            cin >> Arr[j];
        }
        largest(Arr, N);
        for (k = 1; k <= N; k++)
        {
            cout << Arr[k] << " ";
        }
        cout << endl;
    }
    return 0;
}