#include <iostream>

using namespace std;

int main() {
    int T, A, B, C;
    double res;
    cout.precision(2);
    cin >> T;
    while(T--) {
        cin >> A >> B >> C;
        res = 1.0*C - 1.0*B*B/(4*A);
        cout << fixed << res << endl;
    }
    return 0;
}

/*

f(x) = ax2 + bx + c is maximum when df(x)/dx = 0:
2ax + b = 0 --> x = -b/2a
then: f(-b/2a) = b2/(4a) - b2/(2a) + c = c - b2/(4a) 

*/