#include <iostream>
using namespace std;

int main() {

    int n,m=0;
    int number=1;
    int basket[101]= {0};

    cin>>n>>m;

    for(int idx=1;idx<=n;idx++){
        basket[idx]=number;
        number++;
    }

    for(int a=1; a<=m; a++){
        int i,j,tmp=0;

        cin>>i>>j;

        tmp=basket[i];
        basket[i]=basket[j];
        basket[j]=tmp;
    }
    
    for(int i=1; i<=n; i++){
            cout<<basket[i]<<" ";
    }
    
    return 0;

    }
