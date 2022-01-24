#include<iostream>

using namespace std;

int getSum(int b, int n1, int n2) {
    // write your code here
    int a1[10],a2[10],ans[20],i=0;
int carry=0;
while(n1>0 || n2>0){
    a1[i]=n1%10;
    a2[i]=n2%10;
    ans[i]=a1[i]+a2[i]+carry;
    if(ans[i]>=b){
        ans[i]=ans[i]-b;
        carry++;
        
    }
    n1=n1/10;
    n2=n2/10;
    i++;
}

for(int j=i-1; j>=0; j--){
    cout<<ans[j];
}
    return 0;
}


int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
}