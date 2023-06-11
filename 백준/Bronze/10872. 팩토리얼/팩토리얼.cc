#include <iostream>
 
using namespace std;
 
int main() {

    int N=0, Fact=1;
    cin>>N;
    for(int i=2;i<=N;i++){
       Fact*=i;
    }
    cout<<Fact<<std::endl;



    return 0;

}