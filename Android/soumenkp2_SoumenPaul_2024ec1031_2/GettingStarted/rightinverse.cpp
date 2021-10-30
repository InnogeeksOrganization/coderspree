#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    
    vector<int> store;
    
    while(n!=0)
    {
        int num = n%10;
        store.push_back(num);
        
        n=n/10;
        
    }
    
    int s = store.size();
    /*for(int i=0;i<s;i++)
    {
        cout<<store[i]<<" ";
    }*/
    
    //swapping
    for(int i=0;i<s/2;i++)
    {
        int swap = store[i];
        store[i] = store[s-i-1];
        store[s-i-1] = swap;
        
        
    }
    
    
   /* for(int i=0;i<s;i++)
    {
        cout<<store[i]<<" ";
    } */
    
    int array[s];
    
    for(int i=0;i<s;i++)
    {
        int index = store[i];
        array[index-1] = i+1;
    
    }
    
    
    for(int i=0;i<s;i++)
    {
        cout<<array[i];
    }
    
    
    
    
    
    
    
    
    
}
