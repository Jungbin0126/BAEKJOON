#include <iostream>
 
using namespace std;
 
int main() {

   int a,c,s,cpoint=100,spoint=100;
   cin>>a;
   while(a--){
    cin>>c>>s;
    if(c>s){
        spoint=spoint-c;
    }
    else if(c<s)
    {
        cpoint=cpoint-s;
    }
    else{
        cpoint=cpoint-0;
    }
    
    

   }
    cout<<cpoint<<endl;
    cout<<spoint<<endl;
   return 0;
}