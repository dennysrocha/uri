#include <iostream>

long long phillBonati[18];

void evenPhillBonati(int pos);
void oddPhillBonati(int pos);

void evenPhillBonati(int pos) {
    if(pos > 17) return;
    phillBonati[pos] = phillBonati[pos-1] * phillBonati[pos-2];
    oddPhillBonati(pos+1);
}

void oddPhillBonati(int pos) {
    if(pos > 17) return;
    phillBonati[pos] = phillBonati[pos-1] + phillBonati[pos-2];
    evenPhillBonati(pos+1);
}

using namespace std;

int main() {
    int N;
    phillBonati[0] = 0LL;
    phillBonati[1] = 0LL;
    phillBonati[2] = 1LL; 
    oddPhillBonati(3);
    while(cin >> N) {
        cout << phillBonati[N] << endl;
    }
    return 0;
}

/*

a1 = 0
a2 = 1
a3 = a2 + a1
a4 = a3*a2
a5 = a4 + a3
a6 = a5*a4
a7 = a6 + a5
a8 = a7*a6


*/