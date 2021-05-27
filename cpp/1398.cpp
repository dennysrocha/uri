#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n, len;
    string line, bin;
    while(cin >> line) {
        n = 0;
        len = line.length();
        bin = line;
        while(line[len-1] != '#') {
            cin >> line;
            bin += line;
            len = line.length();
        }
        for(int i=0; i<bin.length()-1; i++) {
            n += n + bin[i] - '0';
            n %= 131071;
        }
        (n == 0)? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}