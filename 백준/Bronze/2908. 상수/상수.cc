#include <iostream>
using namespace std;

int main() {

    int a,b;
    cin>>a>>b;
    int ad=0,bd=0;
    ad+=(a%10)*100;
    ad+=(a%100-a%10);
    ad+=a/100;

    bd+=(b%10)*100;
    bd+=(b%100-b%10);
    bd+=b/100;

    if(ad>bd){
        cout<<ad;
    }
    else{
        cout<<bd;
    }


    }

