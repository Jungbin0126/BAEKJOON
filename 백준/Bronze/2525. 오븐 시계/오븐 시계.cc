#include <iostream>

using namespace std;
int main() {
    int A, B, time;
    
    cin >> A >> B >> time;


    A += time / 60;
    time -= time / 60 * 60;
    B += time;
    
    while (A >= 24 || B >= 60)
    {
        
        if (B >= 60)
        {
            A += B/60;
            B -= B/60*60;
        }
        else if (A >= 24)
        {
            A %= 24;
        }

    }
    
    cout << A << ' ' << B << '\n';
    
}
