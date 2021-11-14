#include <iostream>
using namespace std;

int main(){

    int low, high,i,j;
    cin >> low >> high;
    
for(i=low;i<=high;i++)
{

j=2;
int flag=0;
    while(j*j<=i)
    {
    
if(i%j==0)
{
    flag++;
    break;
}
j++;

    }
    

if(flag==0)

    cout << i  << "\n";
        
}

return 0;

}
