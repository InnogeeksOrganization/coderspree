#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    ll arr[n];
    ll i;
    for(i=0;i<n;i++)
    cin>>arr[i];
   ll maximum=arr[0],minimum=arr[0];
    for(i=0;i<n;i++){
        maximum=max(arr[i],maximum);
        minimum=min(arr[i],minimum);
    }    //write your code here
    cout<<(maximum-minimum)<<"
";
    return 0;
    
}