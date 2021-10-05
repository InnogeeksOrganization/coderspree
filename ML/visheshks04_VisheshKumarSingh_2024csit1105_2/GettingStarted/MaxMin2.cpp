#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ar[n];
    
    for(int i=0;i<n;i++){
        scanf("%d", ar+i);
    }
    
    int max=0, min=0, second_max=0, second_min=0;
    
    for(int i=0;i<n;i++){
        if(ar[max] < ar[i])
            max = i;
            
        if(ar[min] > ar[i])
            min = i;
    }
    
    for(int i=0;i<n;i++){
        
        if(i == max || i == min)
            continue;
            
        if(ar[second_max] < ar[i])
            second_max = i;
            
        if(ar[second_min] > ar[i])
            second_min = i;
    
    }
    
    cout<<ar[second_max]<<" "<<ar[second_min];
    return 0;
}
