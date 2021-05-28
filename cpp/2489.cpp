#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout.precision(4);
    double A, D, R, res;
    while(cin >> A >> D >> R) {
        res = D*tan((R-90)*M_PI/180.0) + A;
        cout << fixed << res << endl;
    }
    return 0;
}