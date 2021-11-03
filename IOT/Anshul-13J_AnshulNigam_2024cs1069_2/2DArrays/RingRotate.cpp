#include<bits/stdc++.h>
using namespace std;


void display(vector<vector<int>>&arr){
    
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n, m, s, r;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    cin >> s >> r;
    int i=s-1,j=s-1,k=0;
    int rot[2*(n+m-2)];
    while(i<(n+1-s))
    {
        rot[k++]=arr[i++][j];
    }
    j++;
    i--;
        while(j<(m+1-s))
    {
        rot[k++]=arr[i][j++];
    }
    j--;
    i--;
    while(i>s-2)
    {
        rot[k++]=arr[i--][j];
    }
    i++;
    j--;
    while(j> s-1)
    {
        rot[k++]=arr[i][j--];
    }

    r=r%k;
    if(r<0)
    {
        r=-r;
        r=k-r;
    }
    for(i=0;i<r;i++)
    {
        int temp=rot[k-1];
        for(j=k-1;j>0;j--)
        {
            rot[j]=rot[j-1];
        }
        rot[0]=temp;
    }
    
    i=s-1,j=s-1,k=0;
    while(i<(n+1-s))
    {
        arr[i++][j]=rot[k++];
    }
    j++;
    i--;
        while(j<(m+1-s))
    {
        arr[i][j++]=rot[k++];
    }
    j--;
    i--;
    while(i>s-2)
    {
        arr[i--][j]=rot[k++];
    }
    i++;
    j--;
    while(j> s-1)
    {
        arr[i][j--]=rot[k++];
    }
    
    display(arr);
}