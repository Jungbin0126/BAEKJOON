#include <iostream>
using namespace std;

int main() {

    int stick[100001],n;


    cin>>n;
    

    for(int i=0; i<n;i++){
        cin>>stick[i];
    }


    int max=stick[n-1],total=1;

    for (int i=n-2;i>=0; i--){
        if(max<stick[i]){
            
            max = stick[i];
            total++;
        }
    }

    cout<<total<<std::endl;


    }
