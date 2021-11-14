#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;

    for(int n=low;n<=high;n++){
        int count=0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                count++;
                break;
            }
        }
        if(count==0){
            cout<<n<<endl;
        }
    }

}