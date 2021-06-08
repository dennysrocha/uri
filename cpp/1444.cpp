#include <iostream>

using namespace std;

int reduce(int N) {
    return (N+2)/3;
}

int main() {
    int N;
    while(cin >> N) {
        if(N == 0) return 0;
        int res = 0;
        while(N != 1) {
            N = reduce(N);
            res += N;
        }       
        cout << res << endl;
    }
    return 0;
}