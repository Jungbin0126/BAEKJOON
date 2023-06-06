#include <iostream>
 
using namespace std;
 
int main() {
    int a,b;
    cin>>a>>b;
    for(int i=0;i<b;i++){
        int c,d;
        cin>>c>>d;

        a=a-(c*d);

        
        


    }
    if(a==0){
            cout<<"Yes"<<endl;
        }
    else{
            cout<<"No"<<endl;
        }



    return 0;
}