#include <iostream>
using namespace std;

int main(){

    double a,b=0;

    std::cin>>a>>b;

    // use it to put an exact decimal
    cout << fixed;
    cout.precision(9);

    std::cout<< a / b;


    return 0;
}

