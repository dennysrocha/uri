#include <iostream>

using namespace std;

#define NUM_MAX 100001
#define MOD 1000000009

long long fatorial[NUM_MAX];

void fat() {
    long long res = 1;
    for(long long i=1; i<NUM_MAX; i++) {
        if(i>3) {
            res *= i;
            res %= MOD;
            fatorial[i] = res;
        }
        else fatorial[i] = 1;
    }
}

int main() {
    fat();
    int N;
    while(cin >> N) {
        if(N == 0) return 0;
        cout << fatorial[N] << endl;
    }
    return 0;
}

/*

we can organize the queue in N! ways and the sequence of Andre, Bruno and Carlos in 3! ways, but those
three should stay in a particular way, then only the order Carlos -> Bruno -> Andre is accepted rather
than the 6 ways:

res = N!/3!

*/
