#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int> store;
    while(n!=0)
    {
        int num = n%10;
        store.push_back(num);
        n=n/10;
    }
    
    for(int i=0;i<store.size();i++)
    {
        //cout<<store[i]<<" ";
    }
    
    
    int s = store.size();
    int array[s];
    for(int i=0;i<s;i++)
    {
        int index = store[i];
        array[s-index]=i+1;
    }
    
    //cout<<endl;
    
    for(int i=0;i<s;i++)
    {
        cout<<array[i];
    }
    
    
    
    
    
    
}
