#include<iostream>
#include<vector>

using namespace std;

void columnTraversal(vector<vector<int>> mat){
    int r=mat.size();
    int c=mat[0].size();
    int i,j=0;
    while(j<c)
    {
        for(i=0;i<r;i++)
            cout<<mat[i][j]<<endl;
        j++;
        if(j<c)
        {   for(i=r-1;i>=0;i--)
                cout<<mat[i][j]<<endl;
            j++;
        }
    }
}

int main(){
    int n;
    int m;
    cin>> n;
    cin>> m;
    
    vector<vector<int>> mat;
    for(int i= 0; i< n; i++){
        vector<int> arr;
        for(int j= 0; j< m; j++){
            int ele;
            cin>> ele;
            arr.push_back(ele);
        }
        mat.push_back(arr);
    }
    
    columnTraversal(mat);
}