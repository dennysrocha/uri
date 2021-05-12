#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int D, VF, VG;
    float res;
    while (cin >> D >> VF >> VG) {
        cout << ((12.0/VF) >= sqrt(144 + pow(D,2))/VG ? "S" : "N") << endl;
    }
    return 0;
}

/*
    time tF = D/VF
    time tG = sqrt(144 + D^2)/VG
    print tF >= tG ? "S" : "N"
*/