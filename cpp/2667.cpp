#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string str;
    int res = 0;
    cin >> str;
    int len = str.length();
    for(int i=0; i<len; i++) {
        res += str[i] - '0';
    }
    res %= 3;
    cout << res << endl;
    return 0;
}