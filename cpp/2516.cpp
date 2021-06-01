#include <iostream>

using namespace std;

int main() {
    int S, va, vb;
    float t;
    cout.precision(2);
    while(cin >> S >> va >> vb) {
        va -= vb;
        if(va>0) {
            t = (1.0*S)/va;
            cout << fixed << t << endl;
        }
        else {
            cout << "impossivel" << endl;
        }
    }
    return 0;
}