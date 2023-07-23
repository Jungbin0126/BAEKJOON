#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int increasing[8]={1,2,3,4,5,6,7,8};
    int decreasing[8]={8,7,6,5,4,3,2,1};

    int in=0;
    int de=0;

    int input[8];
    for(int i=0;i<8;i++){
        cin>>input[i];

    }
    for(int i=0;i<8;i++){
        if(input[i]==increasing[i]){
            in++;
        }
        else if(input[i]==decreasing[i]){
            de++;                                                  
        }
        else break;
    }

    if(in==8){
        cout<<"ascending";
    }
    else if(de==8){
        cout<<"descending";
    }
    else cout<<"mixed";
    
  
 


}
