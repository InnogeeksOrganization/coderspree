#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            if((n%i)==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            cout<<"prime"<<endl;
        }
        else
        {
            cout<<"not prime"<<endl;
        }
    }
    
  return 0;  
}