#include <iostream>
 
using namespace std;
 
int main() {

   int w,n,p,fair=0;
   cin>>w>>n>>p;
   for(int i=0; i<p;i++){
    int p;
    cin>>p;
    if(p>=w && p<=n){
        fair=fair+1;
    }

   }

   cout<<fair<<endl;
   return 0;
}