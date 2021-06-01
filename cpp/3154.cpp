#include <iostream>

using namespace std;

double allDifferent(double D, double P) {
    if(P<1) return 1;
    return ((D-P)/D)*allDifferent(D, P-1);
}

int main() {
    int D, P;
    cout.precision(2);
    double res;
    cin >> D >> P;
    res = 100*(1.0 - allDifferent(1.0*D, 1.0*(P-1)));
    cout << fixed << res << endl;
    return 0;
}