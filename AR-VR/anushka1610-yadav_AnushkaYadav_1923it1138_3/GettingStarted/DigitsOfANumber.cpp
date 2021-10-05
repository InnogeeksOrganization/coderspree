#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int r;
    stack<int>st;
    //write your code here
    while(n!=0)
    {
        r=n%10;
        st.push(r);
        n=n/10;
    }
    while(!st.empty())
    {
        cout<<st.top()<<"\n";
        st.pop();
    }
    return 0;
}
