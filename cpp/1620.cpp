#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string L;
    cout.precision(6);
    while(cin >> L) {
        if(L == "0") return 0;
        int len = L.length();
        if(len > 7 || L[2] == 'e') cout << "1.000000" << endl; // the input can be like 10e10, for example... -.-'
        else {
            double res;
            char *end;
            long long LL = stoll(L);
            res = 1.0 - 3.0/LL;
            cout << fixed << res << endl;
        }
    }
    return 0;
}