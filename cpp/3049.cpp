#include <iostream>

using namespace std;

#define HALF 5600

int main() {
    int B, T;
    float res;
    cin >> B >> T;
    res = (70.0*(B+T))/2.0;
    if(res==HALF) cout << 0 << endl;
    else if(res>HALF) cout << 1 << endl;
    else cout << 2 << endl;
    return 0;
}