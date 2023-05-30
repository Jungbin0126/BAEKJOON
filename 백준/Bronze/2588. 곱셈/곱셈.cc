#include <iostream>
using namespace std;

int main(){

    int a=0;
    string b;

    std::cin>>a;
    std::cin>>b;


    cout << a * (static_cast<int>(b[2])-'0')<<endl;
    cout << a * (static_cast<int>(b[1])-'0')<<endl;
    cout << a * (static_cast<int>(b[0])-'0')<<endl;
    cout << a * stoi(b)<<endl;


   

    return 0;
}

