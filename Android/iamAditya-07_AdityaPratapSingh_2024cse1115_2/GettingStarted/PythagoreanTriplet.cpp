#include <iostream>
using namespace std;

int main(){
   int a,b,c;
   cin>>a>>b>>c;
   
   if((a*a+b*b)==(c*c)){
       cout<<"true";
       cout<<"\n";
   }
   else if((b*b+c*c)==(a*a)){
       cout<<"true";
        cout<<"\n";
   }
   else if((c*c+a*a)==(b*b)){
       cout<<"true";
        cout<<"\n";
   }
   else{
       cout<<"false";
        cout<<"\n";
   }
   


    
}