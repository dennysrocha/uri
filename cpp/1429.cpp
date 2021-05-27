#include <iostream>
#include <cstring>

using namespace std;

int fat[6] = {1, 1, 2, 6, 24, 120};


int main() {
    string N;
    int res, len;
    while(cin >> N) {
        res = 0;
        len = N.length();
        if(N == "0") return 0;
        for(int i=0; i<len; i++) {
            res += (N[i] - '0')*fat[len-i];
        }
        cout << res << endl;
    }
    return 0;
}