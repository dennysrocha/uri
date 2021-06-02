#include <iostream>
#include <cstring>

using namespace std;

void derive(string t) {
    int len;
    int i = 0;
    int res = 0;
    int exp = 0;
    len = t.length();
    while(t[i] != 'x') {
        res += 9*res + t[i++] - '0';
        // cout << "i: " << i << " res: " << res << endl;
    }
    i++;
    while(i < len) {
        exp += 9*exp + t[i++] - '0';
        // cout << "i: " << i << " exp: " << exp << endl;
    }
    res *= exp;
    exp--;
    if(exp != 1) cout << res << "x" << exp;
    else cout << res << "x";
}

int main() {
    int T;
    while(cin >> T) {
        string term;
        for(int i=0; i<T-1; i++) {
            cin >> term;
            derive(term);
            cout << " + ";
            cin >> term;
        }
        cin >> term;
        derive(term);
        cout << endl;
    } 
    return 0;
}