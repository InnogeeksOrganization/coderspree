#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    int x = 0, y = 1, temp;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<x<<"\t";
            temp = x+y;
            x = y;
            y = temp;
        }
        cout<<endl;
    }

}
