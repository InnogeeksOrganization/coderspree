#include<iostream>
#include<stack>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    stack<char> st;
    for (auto i: s){
        if (i==')'){
            if (st.top() == '('){
                cout << "true" << endl;
                return 0;
            }
            while (st.top() != '(')
                st.pop();
            st.pop();
        } else 
            st.push(i);
    }
    cout << "false" << endl;
    return 0;
}