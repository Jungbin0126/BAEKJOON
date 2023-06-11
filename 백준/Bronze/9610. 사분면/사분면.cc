#include <iostream>
 
using namespace std;
 
int main() {

    int a=0;
    cin>>a;
    int Q1=0,Q2=0,Q3=0,Q4=0,AXIS=0;

    while(a--){
        int b=0,c=0;
        cin>>b>>c;
        if((b==0) or (c==0)){
            AXIS++;
        }
        else if((b>0) && (c>0)){
            Q1++;
        }
        else if((b<0) && (c<0)){
            Q3++;
        }
        else if((b>0) && (c<0 )){
            Q4++;
        }
        else if((b<0) && (c>0) ){
            Q2++;
        }
    }

    cout<<"Q1:"<<" "<<Q1<<'\n';
    cout<<"Q2:"<<" "<<Q2<<'\n';
    cout<<"Q3:"<<" "<<Q3<<'\n';
    cout<<"Q4:"<<" "<<Q4<<'\n';
    cout<<"AXIS:"<<" "<<AXIS<<'\n';

    return 0;

}