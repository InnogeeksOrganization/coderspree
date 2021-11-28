#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) 
{
    int n= matrix.size(),r=-1,c=-1,i;
    for(i=0;i<n;i++)
    {
        if(matrix[i][0] <= target && matrix[i][n-1] >= target)
        {
            r=i;
            break;
        }
    }
    if(r==-1)
        return 0;
    for(i=0;i<n;i++)
    {
        if(matrix[r][i]==target)
            c=i;
    }

    if(c==-1)
        return 0;
    cout<<r<<endl<<c;
    return 1;
}

int main() 
{
    int n, target;
    cin>>n;
    vector<vector<int>> mat(n, vector<int> (n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin>>mat[i][j];
    cin>>target;

    if(!searchMatrix(mat, target)) cout<<"Not Found\n";
}