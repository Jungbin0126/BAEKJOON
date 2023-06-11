#include <iostream>
 
using namespace std;
 
int main() {
    int a,b,c,d,e,a1,b1,c1,d1,e1;
    cin>>a>>b>>c>>d>>e>>a1>>b1>>c1>>d1>>e1;
    if((a+a1==1)&&(b+b1==1)&&(c+c1==1)&&(d+d1==1)&&(e+e1==1)){
        cout<<"Y"<<endl;
    }
    else{
        cout<<"N"<<endl;
    }

   return 0;
}