#include <iostream>

using namespace std;

int main() {
    int n;
    int c1, l1, c2, l2;
    cin >> n;
    while(n--) {
        cin >> c1 >> l1 >> c2 >> l2;
        if(c1 < c2 && l1 < l2) cout << "S" << endl;
        else if(c1 < l2 && l1 < c2) cout << "S" << endl;
        else cout << "N" << endl;
    }
    return 0;
}