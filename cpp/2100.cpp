#include <iostream>

using namespace std;

#define MOD 1300031

long long exp2[2001];

void exponentBase2() {
    exp2[0] = 1;
    for(int i=1; i<2001; i++) exp2[i] = (2*exp2[i-1])%MOD;
}

long long solve(int chairs, int pairs) {
    long long res = 1;
    for(long long i=chairs-pairs; i>chairs-2*pairs; i--) res = (i*res)%MOD;
    return (res*exp2[pairs])%MOD;
}

int main() {
    exponentBase2();
    int T, N, M;
    cin >> T;
    while(T--) {
        cin >> N >> M;
        cout << solve(N, M) << endl;
    }
    return 0;
}