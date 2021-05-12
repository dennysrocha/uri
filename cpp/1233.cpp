#include <iostream>
using namespace std;

unsigned int phi(unsigned int n) {
    unsigned int res = n;
    for (unsigned int i=2; i*i <= n; i++) {
        if (n%i == 0) {
            while (n%i == 0) {
                n /= i;
            }
            res -= res/i;
        }
    }
    if (n>1) {
        res -= res/n;
    }

    return res;
}

int main() {
    unsigned int N;
    while (cin >> N) {
        cout << phi(N)/2 << endl;
    }

  return 0;
}