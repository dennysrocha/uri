#include <iostream>

using namespace std;

int fib[41];

void fibonacci() {
    fib[0] = 1;
    fib[1] = 1;
    for(int i=2; i<41; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
}

int main() {
    fibonacci();
    int N;
    while(cin >> N) {
        if(N == 0) return 0;
        cout << fib[N] << endl;
    }
}