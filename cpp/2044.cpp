#include <iostream>

using namespace std;

int main() {
    int N, val, sum, res;
    while(cin >> N) {
        if(N == -1) return 0;
        res = 0;
        sum = 0;
        while(N--) {
            cin >> val;
            sum += val;
            res += (sum%100 == 0);
        }
        cout << res << endl;
    }
}