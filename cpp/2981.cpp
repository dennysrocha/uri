#include <iostream>

using namespace std;

int main() {
    long C, G, d;
    cin >> C >> G;
    d = C/G;
    cout << "A UFSC fecha dia ";
    if(d<10) {
        cout << 21+d << " de setembro." << endl;
    }
    else {
        cout << d-9 << " de outubro." << endl;
    }
    return 0;
}