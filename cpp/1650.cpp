#include <iostream>

using namespace std;

int solve(int row, int col, int isWhite) {
    int res = 0;
    if(isWhite) {
        int x = ((row-8)>>1) + 1; // lines that start with white
        int y = ((row-9)>>1) + 1; // lines that start with black
        int z = ((col-8)>>1) + 1;
        int w = ((col-9)>>1) + 1;
        res += x*z + y*w;
    }
    else {
        int x = ((row-9)>>1) + 1;
        int y = ((row-8)>>1) + 1;
        int z = ((col-8)>>1) + 1;
        int w = ((col-9)>>1) + 1;
        res += x*z + y*w;
    }
    return res;
}

int main() {
    int n, m, c;
    while(cin >> n >> m >> c) {
        if(n == 0) return 0;
        cout << solve(n, m, c) << endl;
    }
    return 0;
}

/*

the solve(args) function can be refactored, but for didatics I've choose to keep it that way...

you can also use this:

int solve(int row, int col, int isWhite) {
    int x, y, z, w, res;
    x = ((row-9+isWhite)>>1) + 1; // lines that start with white
    y = ((row-8-isWhite)>>1) + 1; // lines that start with black
    z = ((col-8)>>1) + 1;
    w = ((col-9)>>1) + 1;
    res = x*z + y*w;
    return res;
}

*/