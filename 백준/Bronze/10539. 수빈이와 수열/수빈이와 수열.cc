#include <iostream>
#include <algorithm>
using namespace std;
int main(){
   int n;
   cin>>n;
   int sum=0;
   int a;
   int output;
   for(int i=0;i<n;i++){
    cin>>a;

    output=a*(i+1)-sum;
    cout<<output<<"\n";
    sum=sum+output;
    
    
   }

}
