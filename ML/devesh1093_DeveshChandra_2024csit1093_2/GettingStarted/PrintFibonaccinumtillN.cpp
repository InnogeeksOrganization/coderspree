#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
 else{
return fibonacci(n-2)+fibonacci(n-1);
    }
}

int main()
{
    int n;
    cin >> n;
    if(n==1){
        cout<<0<<'\n';
    }
    
    else{
        for(int i=1; i<=n; i++){
            cout<<fibonacci(i)<<'\n';
        }
    }
    
    return 0;
}
