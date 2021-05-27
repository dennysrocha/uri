#include <iostream>
#include <math.h>

using namespace std;

int pow2[32];

void initialize() {
    pow2[0] = 0;
    for(int i=1; i<32; i++) {
        pow2[i] = 2*pow2[i-1] + 1;
    }
    return;
}

int main() {
    initialize();
    int T, N;
    cin >> T;
    while(T--) {
        cin >> N;
        cout << pow2[N] << endl;
    }
    return 0;
}