#include <iostream>

using namespace std;


// a(2) = a(1) + 2
// a(3) = a(2) + 3
// a(4) = a(3) + 4
// a(5) = a(4) + 5
// ...
// a(n-1) = a(n-2) + (n-1)
// a(n) = a(n-1) + n
// sum of all lines:
// a(n) = a(1) + (2+3+4+5+...+n) = 1 + (1+2+...+n) = 1 + n*(n+1)/2
int main() {
    int T, N;
    cin >> T;
    while(T--) {
        cin >> N;
        cout << (1 + (N*(N+1) >> 1)) << endl;
    }
    return 0;
}