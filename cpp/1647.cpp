#include <iostream>

using namespace std;

int main() {
    int n, m;
    long long res = 0LL;
    long long exp2 = 1LL;
    while(cin >> n) {
        if(n == 0) return 0;
        for(int i=0; i<n; i++) {
            cin >> m;
            res += m*exp2;
            exp2 *= 2;
        }
        cout << res << endl;
        res = 0LL;
        exp2 = 1LL;
    }
    return 0;
}