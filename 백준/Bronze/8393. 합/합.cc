#include <iostream>
 
using namespace std;
 
int main() {
    int a,total = 0;
    cin >> a;

    for(int i=1; i<=a; i++){
        total += i;         // total = total + i
    }
    cout<<total<<endl;

    return 0;
}