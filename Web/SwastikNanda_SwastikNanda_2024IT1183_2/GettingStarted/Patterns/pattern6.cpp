// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     // int a=n;
//     int l=2;
//     int b=1;
//     for(int i=1;i<=((n/2)+1);i++)
//     {
//         for(int j=n-l;j>0;j--){                       //commented code is working properly on VS code and online compilers but not on pepcoding site. 
//             printf("* ");
//         }
//         for(int k=b;k>0;k--){
//             printf(" ");
//         }
//         for(int m=n-l;m>0;m--){
//             printf("* ");
//         }
//         printf("\n");
//         l++;
//         b=b+4;
//     }
    
//     l=l-2;
//     b=b-8;
//     for(int i=1;i<=n/2;i++)
//     {
//         for(int j=n-l;j>0;j--){
//             printf("* ");
//         }
//         for(int k=b;k>0;k--){
//             printf(" ");
//         }
//         for(int m=n-l;m>0;m--){
//             printf("* ");
//         }
//         printf("\n");
//         l--;
//         b=b-4;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
                                                        
    int stars = n / 2 + 1;
    int spaces = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= stars; j++){
            cout << ("*	");
        }
        for (int j = 1; j <= spaces; j++){
            cout << ("	");
        }
        for (int j = 1; j <= stars; j++){
            cout << ("*	");
        }

        cout << endl;
        
        if (i < n / 2 + 1){
            stars--;
            spaces += 2;
        }else{
            stars++;
            spaces -= 2;
        }
    }
    return 0;
}
