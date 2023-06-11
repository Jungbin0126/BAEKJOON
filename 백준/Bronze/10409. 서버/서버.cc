#include <iostream>
 
using namespace std;
 
int main() {
    int n,t;
    cin>>n>>t;
    int b, total=0, l=0;
    for(int i=0;i<n;i++){
        cin>>b;
        total+=b;
        if(total<=t){
            l++;
        }
    }

    cout<<l;

   return 0;
}