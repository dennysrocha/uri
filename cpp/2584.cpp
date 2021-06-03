#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int C, N;
    double res;
    cin >> C;
    cout.precision(3);
    while(C--) {
        cin >> N;
        res = (1.25*N)*N/tan(M_PI/5);
        cout << fixed << res << endl;
    }
    return 0;
}