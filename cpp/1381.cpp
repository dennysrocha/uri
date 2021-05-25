#include <iostream>

using namespace std;

long long fatorial[20000001];
long long m = 1300031;

void fat() {
    fatorial[0] = 1;
    fatorial[1] = 1;
    for(int i=2; i<2000001; i++) {
        fatorial[i] = (fatorial[i-1]*i)%m;
    }
}

// using same algorithm for modular inverse of 'num'
// check it at https://bit.ly/3ffXfbB
void gcdExtended(long long num, long long mod, long long *x, long long *y) {
    if(num == 0) {
        *x = 0;
        *y = 1;
        return;
    }

    long long x1, y1;
    gcdExtended(mod%num, num, &x1, &y1);

    *x = y1 - (mod/num)*x1;
    *y = x1;

    return;
}

long long inv(long long num, long long mod) { // find b^{-1} mod(p) using ax + by = gcd(a,b)
    long long x, y;
    gcdExtended(num, mod, &x, &y);
    return (x%m + m)%m;
}

int binCoef(int n, int k) {
    return fatorial[n]*(inv(fatorial[k]*fatorial[n-k], m))%m; // a/b mod(p) == a*b^{-1} mod(p)...
}

int main() {
    fat();
    int T, N, C;
    cin >> T;
    while(T--) {
        cin >> N >> C;
        // this is the classic Stars and Bars problem, which sol is C(C+N-1, N-1)
        int res = binCoef(C+N-1, N-1);
        cout << res << endl;
    }
}