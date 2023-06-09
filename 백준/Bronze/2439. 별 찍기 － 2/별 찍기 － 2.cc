#include <iostream>
 
using namespace std;
 
int main() {
    int a;
    cin>>a;

    for(int i=0; i<a;i++){

        
        for(int j=1; j<a-i; j++){
            cout<<" ";
        }
        for(int k=0; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}