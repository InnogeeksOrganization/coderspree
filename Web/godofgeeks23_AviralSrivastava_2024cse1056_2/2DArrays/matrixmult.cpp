// 1. You are given a number n1, representing the number of rows of 1st matrix.
// 2. You are given a number m1, representing the number of columns of 1st matrix.
// 3. You are given n1*m1 numbers, representing elements of 2d array a1.
// 4. You are given a number n2, representing the number of rows of 2nd matrix.
// 5. You are given a number m2, representing the number of columns of 2nd matrix.
// 6. You are given n2*m2 numbers, representing elements of 2d array a2.
// 7. If the two arrays representing two matrices of dimensions n1 * m1 and n2 * m2 can be multiplied, display the contents of prd array as specified in output Format.
// 8. If the two arrays can't be multiplied, print "Invalid input".

#include <iostream>
using namespace std;
int main()
{
    int n1, n2, m1, m2;
    cin >> n1 >> m1;
    int a1[n1][m1];
    for(int i=0;i<n1;i++)
        for(int j=0;j<m1;j++)
            cin >> a1[i][j];
    cin >> n2 >> m2;
    int a2[n2][m2];
    for(int i=0;i<n2;i++)
        for(int j=0;j<m2;j++)
            cin >> a2[i][j];
    if(m1 != n2)
        cout << "Invalid input";
    else
    {
        int prd[n1][m2];
        for(int i=0;i<n1;i++)
            for(int j=0;j<m2;j++)
            {
                int sum = 0;
                for(int k=0;k<m1;k++)
                    sum += a1[i][k] * a2[k][j];
                prd[i][j] = sum;
            }
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m2;j++)
                cout << prd[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}