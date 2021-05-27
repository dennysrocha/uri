#include <iostream>

using namespace std;

int solve(int x, int y) {
    return x+y;
}

void sort(int r, int b, int c) {
    if(r > b && r > c) cout << "Rafael ganhou" << endl;
    else if(b > r && b > c) cout << "Beto ganhou" << endl;
    else cout << "Carlos ganhou" << endl;
}

int main() {
    int N, x, y, x2, y2, y3;
    cin >> N;
    while(N--) {
        cin >> x >> y;
        x2 = x*x;
        y2 = y*y;
        y3 = y2*y;
        sort(solve(9*x2, y2), solve(2*x2, 25*y2), solve(-100*x, y3));
    }
}  