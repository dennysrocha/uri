#include <iostream>

using namespace std;

int main() {
    int N, M, C;
    while(cin >> N >> M) {
        if(N == -1) return 0;
        long long res = 0;
        while(N--) {
            cin >> C;
            res += 1LL*(N+1)*M*C;
        }
        cout << res << endl;
    }
    return 0;
}