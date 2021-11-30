#include<iostream>
using namespace std;
int main()
{
int a, b, i, j, mat1[10][10], mat2[10][10], add[10][10];
cin>>a>>b;
for(i=1;i<=a;i++)
{
    for(j=1;j<=b;j++)
    {
        cin>>mat1[i][j];
    }
}
for(i=1;i<=a;i++)
{
    for(j=1;j<=b;j++)
    {
        cout<<mat1[i][j]<<" ";
    }
    cout<<endl;
}

}
