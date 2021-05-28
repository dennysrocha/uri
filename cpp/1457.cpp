#include <iostream>
#include <cstring>

using namespace std;

long long oracle(int N, int K) {
    long long res = 1LL;
    for(int i=0; i<N; i+=K) {
        res *= (N-i);
    }
    return res;
}

int main() {
    int T, N, K;
    char ch;
    string str;
    cin >> T;
    while(T--) {
        N = 0;
        K = 0;
        cin >> str;
        int i = 0;
        ch = str[i];
        while(ch != '!') {
            N = 10*N + ch - '0';
            i++;
            ch = str[i];
        }
        K = str.length() - i;
        cout << oracle(N, K) << endl;
    }
}