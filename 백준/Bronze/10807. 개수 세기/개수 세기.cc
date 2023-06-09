#include <iostream>
 
using namespace std;
 
int main() {

    int a=0,b=0,score=0;
    cin>>a;
    int arr[a];
    

    for(int i=0; i<a;i++){

        cin >> arr[i];
        
    }
    cin>>b;

    for(int i=0; i<a;i++){

        if(b==arr[i]){
            score=score+1;
        }
        
    }

    cout<<score<<endl;





    return 0;

}